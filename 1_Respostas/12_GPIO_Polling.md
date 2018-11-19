1. Crie dois processos, e faça com que o processo-filho gere uma onda quadrada, enquanto o processo-pai faz polling de um botão no GPIO, aumentando a frequência da onda sempre que o botão for pressionado. A frequência da onda quadrada deve começar em 1 Hz, e dobrar cada vez que o botão for pressionado. A frequência máxima é de 64 Hz, devendo retornar a 1 Hz se o botão for pressionado novamente.

#include <wiringPi.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  struct pollfd pfd;
  char buffer;
  int led = 4, btn = 1, t = 0, tr = 0;
  float f = 1, T = 1;
  pid_t pid; //process
  int fd[2];  //pipe

   pid = fork(); 
   pipe(fd); 

   wiringPiSetup();
     if(pid == 0) //filho
     { 
       while(1)
       {
         close(fd[1]); 
         printf("Processo filho criado!\n");
         read(fd[0], &tr, sizeof(tr)); 
         printf("Valor de t lido no filho: %d \n", tr);
         digitalWrite(led, LOW);
         usleep(tr);
         digitalWrite(led, HIGH);
         usleep(tr);
       }
     }
     else //pai
     {
       printf("processo pai criado\n");
       while (1)
       {
         usleep(50000);
         if(digitalRead(btn)==1)
         {
           close(fd[0]); 
           printf("Valor de t escrito: %d\n", t);

           f = 2*f;
           if(f>64)
           f = 1;
           T = (1/(2*f))*1000000;
           t = (int) T;
           write(fd[1], &t, sizeof(t)); 
         }
       }
     }
     return 0;
   }









