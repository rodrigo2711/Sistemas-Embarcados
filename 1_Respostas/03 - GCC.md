

Para todas as questões, compile-as com o gcc e execute-as via terminal.

  1-  Crie um "Olá mundo!" em C.
 
      $ nano Ola_mundo.c
         
      #include<stdio.h>
      int main(void){
      printf("Olá mundo! \n");
      return 0;
      } #include<stdio.h>
      int main(void){
      printf("Olá mundo! \n");
      return 0;
      }
      
      $ gcc Ola_mundo.c
      $ gcc Ola_mundo.c -o mundo
      $ ./mundo  
       
2-  Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':


      $ $nano questao2.c
      
      #include <stdio.h>
        int main(){
        char nome[10];

          printf("Digite seu nome: ");
          scanf("%s", nome);
          printf("Ola %s \n", nome);
          return 0;
        }
      
      $ gcc questao2.c
      $ gcc questao2.c -o ola_usuario1
      $ ./ola_usuario1
      $ Digite seu nome: Rodrigo
        Ola Rodrigo
       ```
 3-  Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.

    $ ./ola_usuario_1
    $ Digite o seu nome: Rodrigo Sousa
    % Olá Rodrigo

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:

    $ ./ola_usuario_1
    $ Digite o seu nome: "Eu Mesmo"
    % Olá "Rodrigo

(c) Se é usado um pipe. Por exemplo:

    $ echo Eu | ./ola_usuario_1
    $ Ola Rodrigo

(d) Se é usado um pipe com mais de um nome. Por exemplo:

    $ echo Eu Mesmo | ./ola_usuario_1
    $ Ola Rodrigo

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:

    $ echo "Eu Mesmo" | ./ola_usuario_1
    $ Ola Rodrigo

(f) Se é usado o redirecionamento de arquivo. Por exemplo:

    $ echo Ola mundo cruel! > ola.txt
    $ ./ola_usuario_1 < ola.txt
    $ Ola Ola

4 - Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

    #include <stdio.h>
    int main (int argc, char* argv[]){
    int i = 1;
    printf("Ola");
    for(i; i< argc; i++){
    printf( "%s", argv[i]);
    }
    printf("\n");
    return 0;
    }
      
    $ ./ola_usuario_2  Rodrigo
    $ Ola Rodrigo

5 - Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.

    $ ./ola_usuario_2 Rodrigo Sousa
    $ Ola Rodrigo Sousa

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:

    $ ./ola_usuario_2 "Eu Mesmo"
    $ Ola Rodrigo Sousa

(c) Se é usado um pipe. Por exemplo:

    $ echo Eu | ./ola_usuario_2
    $ Ola

(d) Se é usado um pipe com mais de um nome. Por exemplo:

    $ echo Eu Mesmo | ./ola_usuario_2
    $ Ola

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:

    $ echo Eu Mesmo | ./ola_usuario_2
    $ Ola

(f) Se é usado o redirecionamento de arquivo. Por exemplo:

    $ echo Ola mundo cruel! > ola.txt
    $ ./ola_usuario_2 < ola.txt
    $ Ola

6- Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':

    #include <stdio.h>
    int main (int argc, char* argv[]){
    int i = 1;
    printf("Ola");
    for(i; i< argc; i++){
    printf( " %s", argv[i]);

    }
    printf("\n");
    printf("Número de entradas: %d\n", argc);
    return 0;

    }

    $ ./ola_usuario_3 Rodrigo
    $ Ola Rodrigo
    $ Numero de entradas = 2

7- Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':

    #include <stdio.h>
    int main (int argc, char* argv[]){
    int i = 1;
    printf("Argumentos:");
    for(i; i< argc; i++){
    printf( " %s", argv[i]);

    }
    printf("\n");
    return 0;
    }
    
    $ ./ola_argumentos Rodrigo Sousa Santos
    $ Argumentos: Rodrigo Sousa Santos

 8 - Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo: int Num_Caracs(char *string); Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.
    
	//Arquivo num_caracs.c
	#include <string.h>
	#include "num_caracs.h"

	int Num_Caracs(char *string){
		return strlen(string);
	}
	//Arquivo num_caracs.h
	#ifndef num_caracs_h
	#define	num   caracs_h

	int Num_Caracs(char*);

	#endif

9- Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':
      

$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5

10 -Crie um Makefile para a questão anterior.

   Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':

$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25

11- Crie um Makefile para a questão anterior.


