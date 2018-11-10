1. Quais são as vantagens e desvantagens em utilizar:

(a) fork?
	
	Vantagem: Neste caso ocorre a criação do processo filho através de um processo pai, sendo que o processo criado possui seu próprio espaço de memória.
	Desvantagem: Como é necessário copiar as funções do processo pai para o processo filho, pode ter mais esforço computacional. Por ter uma memória diferente, é mais difícil estabeler comunicaçãoo interprocessual.

(b) threads?

	Vantagens: É mais simples estabelecer comunicação entre threads através da memória compartilhada .
	Desvantagens: Pode ocorrer corrupção de dados por ter memória compartilhada.
	
2. Quantas threads serão criadas após as linhas de código a seguir? Quantas coexistirão? Por quê?

(a)

```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}
```

	Serão criadas duas threads e as duas coexistirão, pois serão executadas simultaneamente.

(b)
```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_join(t1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t2, NULL);
	return 0;
}
```

	Serão criadas duas threads e elas não coexistirão, pois serão executadas separadamente.


3. Apresente as características e utilidades das seguintes funções:

(a) `pthread_setcancelstate()`

	Define o estado de cancelabilidade do estado chamando thread para o valor dado no state. O estado de cancelabilidade do encadeamento é retornado no buffer apontado por oldstate . O argumento de estado deve ter um dos seguintes valores:
	PTHREAD_CANCEL_ENABLE: O encadeamento é cancelável. Este é o cancelabilidade padrão estado em todos os novos threads, incluindo o thread inicial. O tipo de cancelabilidade do encadeamento determina quando um thread responderá a um pedido de cancelamento.
	PTHREAD_CANCEL_DISABLE: O encadeamento não é cancelável. Se uma solicitação de cancelamento for recebido, ele é bloqueado até que a capacidade de cancelamento seja ativada.
	
		int pthread_setcancelstate(int state, int *oldstate);

(b) `pthread_setcanceltype()`

	Define o tipo de cancelabilidade do chamando thread para o valor dado em type . O anterior O tipo de cancelabilidade do encadeamento é retornado no buffer apontado para por oldtype. O argumento type deve ter um dos seguintes valores:
       PTHREAD_CANCEL_DEFERRED: Uma solicitação de cancelamento é adiada até o próximo telefonema uma função que é um ponto de cancelamento. Este é o tipo de cancelabilidade padrão em todos os novos tópicos, incluindo o thread inicial.
	PTHREAD_CANCEL_ASYNCHRONOUS: O segmento pode ser cancelado a qualquer momento. (Normalmente, será ser cancelado imediatamente após receber um pedido de cancelamento, mas o sistema não garante isso.
	
		int pthread_setcanceltype(int type, int *oldtype);
