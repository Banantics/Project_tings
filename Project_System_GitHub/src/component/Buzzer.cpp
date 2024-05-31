#include "component/Buzzer.hpp"

#include <Arduino.h>
#include <math.h>

Buzzer::Buzzer(const int pin) :
	pin_{pin}
{
	if (pin_ != 0) pinMode(pin_, OUTPUT);
}

bool Buzzer::play(const int note, const int duration, const int tempo, bool stop) const
{
	static bool playing_note = false;
	static unsigned long prev_mil = 0;

	if (!playing_note)
	{
		playing_note = true;
		prev_mil = millis();

		tone(pin_, note);
	}

	unsigned long curr_mil = millis();
	unsigned long whole_note = ((60000 * 4) / tempo) / abs(duration);
	if (duration < 0)
		whole_note *= 1.5;

	if ((playing_note && curr_mil - prev_mil > whole_note) || stop)
	{
		noTone(pin_);
		playing_note = false;
		return true;
	}
	
	return false;
}
