#include "Car.hpp"

#include <Arduino.h>

#include "music/AtDoomGate.hpp"
#include "music/TakeOnMe.hpp"

Car::Car(Button button, Buzzer buzzer, GyroScope gyroscope, Infrared infrared, Motor motor, SServo servo, UltraSound ultrasound) :
	button_{button},
	buzzer_{buzzer},
	gyroscope_{gyroscope},
	infrared_{infrared},
	motor_{motor},
	servo_{servo},
	ultrasound_{ultrasound}
{
	servo_.init();
}

bool Car::is_button_pressed() const
{
	return button_.pressed();
}

// TODO Use Enums for states.
void Car::play_driving_music(const int state) const
{
	static int index = -1;
	static int chord_index = 0;
	static int repeat_count = 0;

	if (state == 1)
	{
		buzzer_.play(0, 0, 0, true);
		index = 0;
		chord_index = 0;
		repeat_count = 0;
	}
	else if ((state == 0 && index == -1) || state == -1)
	{
		if (state == -1)
		{
			index = -1;
			buzzer_.play(0, 0, 0, true);
		}
		return;
	}

	const int note = at_doom_gate[index].chords[chord_index].note;
	const int duration = at_doom_gate[index].chords[chord_index].duration;
	const int tempo = at_doom_gate_tempo;
	bool finished_playing_note = buzzer_.play(note, duration, tempo, false);

	if (finished_playing_note) 
		chord_index += 1;

	if (chord_index == at_doom_gate[index].chord_len)
	{
		repeat_count += 1;
		chord_index = 0;
	}

	if (repeat_count == at_doom_gate[index].repeat)
	{
		index += 1;
		repeat_count = 0;
		chord_index = 0;
	}

	if (index == at_doom_gate_len)
		index = 0;
}

void Car::play_stopping_music(const int state) const
{
	static int index = -1;

	if (state == 1)
	{
		buzzer_.play(0, 0, 0, true);
		index = 0;
	}
	else if ((state == 0 && index == -1) || state == -1)
	{
		if (state == -1)
		{
			index = -1;
			buzzer_.play(0, 0, 0, true);
		}
		return;
	}

	const int note = take_on_me.chords[index].note;
	const int duration = take_on_me.chords[index].duration;
	const int tempo = take_on_me_tempo;
	bool finished_playing_note = buzzer_.play(note, duration, tempo, false);

	if (finished_playing_note) 
		index += 1;

	if (index == take_on_me.chord_len)
		index = 0;
}

// TODO GyroScope

int Car::is_only_middle_on() const
{
	return infrared_.direction() == 0b00100;
}

bool Car::is_all_on() const
{
	return infrared_.direction() == 0b11111;
}

bool Car::is_any_on() const
{
	return infrared_.direction() != 0;
}

void Car::change_angle(const int slight, const int far) const
{
	const int direction = infrared_.direction();
	const int slight_angle = !!(direction & 0b01000) * (-slight) + !!(direction & 0b00010) * slight;
	const int far_angle = !!(direction & 0b10000) * (-far) + !!(direction & 0b00001) * far;

	const int angle = (far_angle + slight_angle) / ((slight_angle != 0 && far_angle != 0) ? 2 : 1);
	servo_.angle(angle);
}

void Car::move(const int speed) const
{
	motor_.move(speed);
}

void Car::stop() const
{
	motor_.move(0);
}

void Car::look_straight() const
{
	servo_.angle(0);
}

bool Car::detects_obstacle(const int closest, const int furthest) const
{
	const float distance = ultrasound_.distance();
	if (distance == NAN)
		return false;

	return distance >= closest && distance <= furthest;
}

bool Car::evade_obstacle(const int speed, const int angle, const int time) const
{
	static int state = 0;
	static unsigned long prev_mil = 0;

	if (state == 0)
	{
		state = 1;
		prev_mil = millis();
	}

	unsigned long curr_mil = millis();

	motor_.move(speed);

	if (state == 1 && curr_mil - prev_mil > (unsigned long) time)
	{
		servo_.angle(-angle);
		state = 2;
	}
	
	if (state == 2 && curr_mil - prev_mil > ((unsigned long) time * 2))
	{
		servo_.angle(angle);
		state = 0;
		return true;
	}

	return false;
}
