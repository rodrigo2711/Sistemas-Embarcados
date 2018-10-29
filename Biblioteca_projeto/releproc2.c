#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char **argv)
{
    pid_t filho1;
    pid_t filho2;
    pid_t filho3;
    pid_t filho4;
    pid_t filho5;
    int i;
    
    filho1 = fork();

    if(filho1 == 0){
        
        execl("/bin/echo","echo","18 >> /sys/class/gpio/export",NULL);
    }

    else{
	
	filho2 = fork();
	    if(filho2 == 0){
        printf("filho2");
        execl("/bin/echo","echo","out > /sys/class/gpio/gpio18/direction",NULL);
    
    }
    else{
	
	filho3 = fork();
	    if(filho3 == 0){
        printf("filho3");
        execl("/bin/echo","echo","1 > /sys/class/gpio/gpio18/value",NULL);
   
 	}
    else{
	sleep(5);
	filho4 = fork();
	    if(filho4 == 0){
        printf("filho4");
        execl("/bin/echo","echo","0 > /sys/class/gpio/gpio18/value",NULL);
    
        
	}
    else{
	filho5 = fork();
	    if(filho5 == 0){
        printf("filho6");
        execl("/bin/echo","echo","18 >> /sys/class/gpio/unexport",NULL);
        }}}}
 	}    	
    return 0;
}
