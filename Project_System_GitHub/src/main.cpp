#include "Car.hpp"

#include <Arduino.h>
#include <Servo.h>

void setup()
{}

void loop()
{
	/* (60000 * 4) / tempo;static Car car{
		Button(8),
		Buzzer(7),
		GyroScope(0, 0),
		Infrared(0, 0, 0, 0, 0),
		Motor(0, 0),
		SServo(0),
		UltraSound(0, 0)
	};
	static bool running = false;
	delay(10);
	if (car.is_button_pressed()) running = !running;
	if (!running) { car.play_music(false); return; }
	car.play_music(true);
	running = false;*/

	static Car car{
		Button(4),
		Buzzer(8),
		GyroScope(A4, A5),
		Infrared(9, 10, 11, 12 , 13),
		Motor(6, 5),
		SServo(7),
		UltraSound(3, 2)
	};
	static bool running = false;

	if (car.is_button_pressed())
	{
		running = !running;

		car.play_stopping_music(-1);
		car.play_driving_music(running ? 1 : -1);
	}

	car.play_driving_music(0);
	car.play_stopping_music(0);

	if (!running)
	{
		car.stop();
		car.look_straight();
		return;
	}

	if (car.is_all_on())
	{
		car.stop();
		car.look_straight();
		car.play_stopping_music(1);
		car.play_driving_music(-1);

		running = false;
		return;
	}

	static bool evade = false;
	if (car.detects_obstacle(45, 50) || evade)
	{
		evade = car.evade_obstacle(40, 30, 750);
		return;
	}

	if (car.is_only_middle_on())
		car.move(33);
	else
		car.move(28);

	if (car.is_only_middle_on())
		car.look_straight();
	else if (car.is_any_on())
		car.change_angle(11, 30);
}
