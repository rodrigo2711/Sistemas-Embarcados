1. Quantos pipes serão criados após as linhas de código a seguir? Por quê?

(a)
```C
int pid;
int fd[2];
pipe(fd);
pid = fork();
```
	Nesse caso, a pipe é criada antes do fork, com isso temos apenas 1 pipe.
	
(b)
```C
int pid;
int fd[2];
pid = fork();
pipe(fd);
```
	Nesse caso, a pipe é criada depois do fork, com isso temos 2 pipes.
	
2. Apresente mais cinco sinais importantes do ambiente Unix, além do `SIGSEGV`, `SIGUSR1`, `SIGUSR2`, `SIGALRM` e `SIGINT`. Quais são suas características e utilidades?
```
	SIGQUIT: Sinal emitido aos processos do terminal quando as teclas de abandono do teclado são acionadas.
	SIGPIPE: Sinal emitido quando ocorre a escrita sobre um pipe não aberto em leitura.
	SIGKILL: Sinal emitido para matar processos. Não pode ser ignorado nem interceptado.  
	SIGHUP: Sinal emitido aos processos associados a um terminal quando este se "desconecta" (corte).
	SIGSYS: Sinal emitido quando é colocado argumento incorreto de uma chamada de sistema. 
```
3. Considere o código a seguir:

```C
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void tratamento_alarme(int sig)
{
	system("date");
	alarm(1);
}

int main()
{
	signal(SIGALRM, tratamento_alarme);
	alarm(1);
	printf("Aperte CTRL+C para acabar:\n");
	while(1);
	return 0;
}
```

Sabendo que a função `alarm()` tem como entrada a quantidade de segundos para terminar a contagem, quão precisos são os alarmes criados neste código? De onde vem a imprecisão? Este é um método confiável para desenvolver aplicações em tempo real?
	
	
	A precisão da função alarm() é na ordem de microsegundos, devido às interrupções em sua execução por outros processos paralelos, que dependem do processador da máquina. Com isso, para algumas aplicações em tempo real ela não é recomendada.
