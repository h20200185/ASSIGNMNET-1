#ifndef CHARDEV_H
#define CHARDEV_H

#include <linux/ioctl.h>

#define MAJOR_NUM 100

//ioctl functions(sequence number ) for all the sensors in IMU
#define G_X_AXIS_IOR(MAJOR_NUM, 0, int *)
#define G_Y_AXIS_IOR(MAJOR_NUM, 1, int *)
#define G_Z_AXIS_IOR(MAJOR_NUM, 2, int *)
#define C_X_AXIS_IOR(MAJOR_NUM, 3, int *)
#define C_Y_AXIS_IOR(MAJOR_NUM, 4, int *)
#define C_Z_AXIS_IOR(MAJOR_NUM, 5, int *)
#define A_X_AXIS_IOR(MAJOR_NUM, 6, int *)
#define A_Y_AXIS_IOR(MAJOR_NUM, 7, int *)
#define A_Z_AXIS_IOR(MAJOR_NUM, 8, int *)
#define B_IOR(MAJOR_NUM,9,int*)

#define DEVICE_FILE_NAME "/dev/imu_char"


#endif