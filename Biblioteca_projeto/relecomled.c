#include "gpio_sysfs.h"
#include <unistd.h>


int main()
{
	int pin1=18;
	int pin2=23;
	int pin3=24;
	
	if(setGPIO_Out(pin1))
		return -1;
	if (GPIO_Write(pin1,1))
		return 1;
	
	if(setGPIO_Out(pin2))
		return -1;
	if (GPIO_Write(pin2,1))
		return 1;
	
	if(setGPIO_Out(pin3))
		return -1;
	if (GPIO_Write(pin3,0))
		return 1;
	
	sleep(10);
		
	if (GPIO_Write(pin3,1))
		return 1;
	if(unsetGPIO(pin1))
		return 2;
	if(unsetGPIO(pin2))
		return 2;
	return 0;


}
