#include "gpio_sysfs.h"
#include <unistd.h>


int main()
{
	int pin1=18;
	int pin2=23;

	if(setGPIO_Out(pin1))
		return -1;
	
	if (GPIO_Write(pin1,1))
		return 1;
	
	if(setGPIO_Out(pin2))
		return -1;

	if (GPIO_Write(pin2,1))
		return 1;

	sleep(10);
	
	if(unsetGPIO(pin1))
		return 2;
	return 0;
	if(unsetGPIO(pin2))
		return 2;
	return 0;


}
