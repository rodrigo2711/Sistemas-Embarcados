#define MAXSTR 64
#define VALID_PINS 0, 1, 4, 7, 8, 9, 10, 11, 14, 15, 17, 18, 21, 22, 23, 24, 25

#include <stdio.h>
#include "gpio_sysfs.h"

int setGPIO_Out(int pin)
{	
	int valid_pins[]={VALID_PINS};
	int c;
	int valid = 0;

	for (c=0;c<(sizeof(valid_pins) / sizeof(int));c++){
		if(pin == valid_pins[c])
			valid = 1;
	}
	if(!valid){
		fprintf(stderr, "ERROR: Invalid pin!\nPin %d is not a GPIO pin...\n", pin);
		return -1;
	}

	FILE *sysfs_handle = NULL;

	if ((sysfs_handle = fopen("/sys/class/gpio/export", "w")) == NULL){
		fprintf(stderr, "ERROR: Cannot open GPIO export...\n(Is this program running as root?)\n");
		return 1;
	}

	char str_pin[3];
	snprintf(str_pin, (3*sizeof(char)), "%d", pin);	
	
	if (fwrite(&str_pin, sizeof(char), 3, sysfs_handle)!=3)	{
		fprintf(stderr, "ERROR: Unable to export GPIO pin %d\n", pin);
		return 2;
	}
	fclose(sysfs_handle);
	
	char str_direction_file[MAXSTR];
	snprintf(str_direction_file, (MAXSTR*sizeof(char)), "/sys/class/gpio/gpio%d/direction", pin);
	if ((sysfs_handle = fopen(str_direction_file, "w")) == NULL){
		fprintf(stderr, "ERROR: Cannot open direction file...\n(Is this program running as root?)\n");
		return 3;
	}
	if (fwrite("out", sizeof(char), 4, sysfs_handle) != 4){
		fprintf(stderr, "ERROR: Unable to write direction for GPIO%d\n", pin);
		return 4;
	}
	fclose(sysfs_handle);
	return 0;
}

int GPIO_Write(int pin, int value)
{
	if ((value!=0)&&(value!=1)){
		fprintf(stderr, "ERROR: Invalid value!\nValue must be 0 or 1\n");
		return -1;
	}

	FILE *sysfs_handle = NULL;
	char str_value_file[MAXSTR];

	snprintf (str_value_file, (MAXSTR*sizeof(char)), "/sys/class/gpio/gpio%d/value", pin);

	if ((sysfs_handle = fopen(str_value_file, "w")) == NULL)
	{
		fprintf(stderr, "ERROR: Cannot open value file for pin %d...\n(Has the pin been exported?)\n", pin);
		return 1;
	}

	char str_val[2];
	snprintf (str_val, (2*sizeof(char)), "%d", value);

	if(fwrite(str_val, sizeof(char), 2, sysfs_handle) != 2)
	{
		fprintf(stderr, "ERROR: Cannot write value %d to GPIO pin %d\n", value, pin);
		return 2;
	}
	fclose(sysfs_handle);

	return 0;
}

int unsetGPIO(int pin)
{
	FILE *sysfs_handle = NULL;
	char str_pin[3];
	char str_value_file[MAXSTR];

	snprintf (str_pin, (3*sizeof(char)), "%d", pin);
	snprintf (str_value_file, (MAXSTR*sizeof(char)), "/sys/class/gpio/gpio%d/value", pin);

	if ((sysfs_handle = fopen(str_value_file, "w")) == NULL){
		fprintf(stderr, "ERROR: Cannot open value file for pin %d...\n", pin);
		return 1;
	}

	if(fwrite("0", sizeof(char), 2, sysfs_handle) != 2){
		fprintf(stderr, "ERROR: Cannot write to GPIO pin %d\n", pin);
		return 2;
	}
	fclose(sysfs_handle);
	
	if ((sysfs_handle = fopen("/sys/class/gpio/unexport", "w")) == NULL){
		fprintf(stderr, "ERROR: Cannot open GPIO unexport...\n");
		return 1;
	}

	if (fwrite(&str_pin, sizeof(char), 3, sysfs_handle)!=3)	{
		fprintf(stderr, "ERROR: Unable to unexport GPIO pin %d\n", pin);
		return 2;
	}
	fclose(sysfs_handle);
	return 0;
}
