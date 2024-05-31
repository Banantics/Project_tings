#ifndef CAR_HPP
#define CAR_HPP

#include "component/Button.hpp"
#include "component/Buzzer.hpp"
#include "component/GyroScope.hpp"
#include "component/Infrared.hpp"
#include "component/Motor.hpp"
#include "component/SServo.hpp"
#include "component/UltraSound.hpp"

class Car
{
	public:
		Car(Button button, Buzzer buzzer, GyroScope gyroscope, Infrared infrared, Motor motor, SServo servo, UltraSound ultrasound);
		bool is_button_pressed() const;
		void play_driving_music(const int state) const;
		void play_stopping_music(const int state) const;
		int is_only_middle_on() const;
		bool is_all_on() const;
		bool is_any_on() const;
		void change_angle(const int slight, const int far) const;
		void move(const int speed) const;
		void stop() const;
		void look_straight() const;
		bool detects_obstacle(const int closest, const int furthest) const;
		bool evade_obstacle(const int speed, const int angle, const int time) const;

	private:
		Button button_;
		Buzzer buzzer_;
		GyroScope gyroscope_;
		Infrared infrared_;
		Motor motor_;
		SServo servo_;
		UltraSound ultrasound_;
};

#endif // CAR_HPP
