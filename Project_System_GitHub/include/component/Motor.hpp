#ifndef COMPONENT_MOTOR_HPP
#define COMPONENT_MOTOR_HPP

class Motor
{
	public:
		Motor(const int lpwm_pin, const int rpwm_pin);

		void move(int speed) const;
	
	private:
		const int lpwm_pin_;
		const int rpwm_pin_;
};

#endif // COMPONENT_MOTOR_HPP
