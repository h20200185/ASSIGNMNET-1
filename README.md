A kernel module is written for a virtual 10 Degree of Freedom (DOF) Inertial Measurement Unit (IMU) sensor. The IMU consists of the following sensors.
MPU9255: 3-axis gyroscope, 3-axis accelerometer, and 3-axis compass/magnetometer
BMP280: barometric pressure sensor

A single device file named “imu_char” is ctreated created in the /dev directory. User space applications can access various parameters (pressure, gyro, compass etc) via appropriate IOCTL calls.
Open
Read (to actually read the device over I2C, I2C need not to be implemented)
IOCTL (to select the parameter of choice), total 10 IOCTL need to be implemented
Close
I2C device (MPU9255 & BMP280) is implemented as a function in the driver which returns a true random number, every time it is read by the user space application. 


