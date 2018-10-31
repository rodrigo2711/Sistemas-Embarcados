#include<stdio.h>
#include<wiringPi.h>

#define rele 1

int main(){

wiringPiSetup();
pinMode (rele, OUTPUT);

for(;;){
	digitalWrite(rele,1);
	delay(1000);
	digitalWrite(rele,0);
	delay(1000);
}
return 0;
}

// gcc -Wall -o rele1 relewirpi.c -lwiringPi
// ./rele1
  
