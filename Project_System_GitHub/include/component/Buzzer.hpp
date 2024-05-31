#ifndef COMPONENT_BUZZER_HPP
#define COMPONENT_BUZZER_HPP

class Buzzer
{
	public:
		Buzzer(const int pin);
		bool play(const int note, const int duration, const int tempo, bool stop) const;
	
	private:
		const int pin_;
};

#endif // COMPONENT_BUZZER_HPP
