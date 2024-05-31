#include "component/UltraSound.hpp"

#include <Arduino.h>
#include <math.h>

UltraSound::UltraSound(const int trigPin, const int echoPin) :
	trigPin_{trigPin},
	echoPin_{echoPin}
{
	pinMode(echoPin_, INPUT);
	pinMode(trigPin_, OUTPUT);

	digitalWrite(trigPin_, LOW);
}

float UltraSound::distance() const
{
	static bool state = false;
	static unsigned long prev_mil = 0;

	const int delay = 10;

	if (!state)
	{
		state = true;
		prev_mil = millis();
		digitalWrite(trigPin_, HIGH);
	}

	unsigned long curr_mil = millis();

	if (state && curr_mil - prev_mil > delay)
	{
		digitalWrite(trigPin_, LOW);
		long duration_us = pulseIn(echoPin_, HIGH);
		float distance_cm = 0.017 * duration_us;

		state = false;
		return distance_cm;
	}

	return NAN;
}
