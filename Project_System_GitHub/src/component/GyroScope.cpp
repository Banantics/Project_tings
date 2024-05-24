#include "component/GyroScope.hpp"

#include <Arduino.h>
#include <Wire.h>
#include <math.h>

const int MPU_ADDR = 0x68;

GyroScope::GyroScope()
{
	// TODO Be more explicit with A4/A5 pins instead of hardcoding it.
	const int reg_6B = 0x6B;
	const int place_0_into_6B = 0x00;
	Wire.begin();
	Wire.beginTransmission(MPU_ADDR);
	Wire.write(reg_6B);
	Wire.write(place_0_into_6B);
	Wire.endTransmission(true);
}

void GyroScope::generate()
{
	const int reg_3B = 0x3B;
	const int reg_request = 7 * 2;
	Wire.beginTransmission(MPU_ADDR);
	Wire.write(reg_3B);
	Wire.endTransmission(false);
	Wire.requestFrom(MPU_ADDR, reg_request, true);

	accelerometer_x_ = Wire.read() << 8 | Wire.read();
	accelerometer_y_ = Wire.read() << 8 | Wire.read();
	accelerometer_z_ = Wire.read() << 8 | Wire.read();
}

double Gyroscope::get_angle(){
    return double pitch = atan2(accelerometer_y(), sqrt(pow(accelerometer_x(), 2) + pow(accelerometer_z(), 2))); // Calculation to get the pitch from the acceleration
}

int GyroScope::accelerator_x() const
{
	return accelerometer_x_;
}

int GyroScope::accelerator_y() const
{
	return accelerometer_y_;
}

int GyroScope::accelerator_z() const
{
	return accelerometer_z_;
}
