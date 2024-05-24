#ifndef COMPONENT_GYROSCOPE_HPP
#define COMPONENT_GYROSCOPE_HPP

class GyroScope
{
	public:
		GyroScope();

		void GyroScope::generate();

		int GyroScope::accelerometer_x() const;
		int GyroScope::accelerometer_y() const;
		int GyroScope::accelerometer_z() const;
        double GyroScope::get_angle() const;
	
	private:
		int accelerometer_x_;
		int accelerometer_y_;
		int accelerometer_z_;
};

#endif // COMPONENT_GYROSCOPE_HPP
