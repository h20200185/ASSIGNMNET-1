
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>              
#include <unistd.h>             
#include <stdint.h>
#include <sys/ioctl.h>          
#include "chardev.h"


uint16_t data;



int ioctl_gx(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_gx failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_gy(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_gy failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_gz(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_gz failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_cx(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_cx failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_cy(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_cy failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_cz(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_cz failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_ax(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_ax failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_ay(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_ay failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}
int ioctl_az(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_az failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}





int ioctl_pressure(int fd, int request)
{
    int ret_val;
    ret_val = ioctl(fd, request);
    if (ret_val < 0) {
        printf("ioctl_pressure failed:%d\n", ret_val);
        exit(-1);
    }
    return 0;
}

void decimal_to_binary(uint16_t n){
  int binaryNum[16];
  int i = 0;
  while (n > 0) {
      binaryNum[i] = n % 2;
      n = n / 2;
      i++;
  }
  printf("This number in binary is:");
  for (int j = i - 1; j >= 0; j--){
      printf("%d", binaryNum[j]);
     }
    printf("\n");
}


/*
 * Main - Call the ioctl functions
 */
int main()
{
    int fd, ret_val;
    int request;
    fd = open(DEVICE_FILE_NAME, 0);
    if (fd < 0) {
        printf("Can't open device file: %s\n", DEVICE_FILE_NAME);
        exit(-1);
    }
    printf("Enter the Request number:");
    scanf("%d", &request);
    if(request <0 || request>9) {
      printf("Invalid Selection of requestuest no.\n");
      exit(-1);
    }
    
    	ioctl_gx( fd, request);
    
    	ioctl_gy( fd,  request);
    
    	ioctl_gz( fd,  request);
    
    	ioctl_cx( fd,  request);
    
    	ioctl_cy( fd,  request);
    
    	ioctl_cz( fd,  request);
    
    	ioctl_ax( fd, request);
   
    	ioctl_ay( fd, request);
    
    	ioctl_az( fd,  request);
   
    	ioctl_pressure( fd,  request);

   
    if(read(fd,&data,sizeof(data))){
      if(align == 'l'){
          decimal_to_binary(data);
          data = data/64;
          printf("The actual decimal number is: %u --", data);
          decimal_to_binary(data);
      }
      else{
        printf("DATA read by the user is:%u --", data);
        decimal_to_binary(data);
      }
    }
    close(fd);
    return 0;
}
