#ifndef GY80_H
#define GY80_H

class Gyroscope{
	public:
	Gyroscope();
	void calibrate();
	Adafruit_L3GD20_Unified chip;// = Adafruit_L3GD20_Unified(2);

	
}

class Accelerometer{
	public:
	Accelerometer();
	void calibrate();
	Adafruit_ADXL345_Unified chip;
	
}

class Compass {
	public:
	Compass();
	void Calibrate();
	void getHeading();
	Adafruit_HMC5883_Unified chip;// = Adafruit_HMC5883_Unified(3);

}

#endif