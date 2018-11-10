1. Apresente as características e utilidades das seguintes funções:

(a) `popen()`

 FILE *popen(const char *command, const char *type);

Essa função abre um processo por meio da criação de um pipe, fazendo um fork e então chamando a shell. O argumento typeda função indica se será feito apenas leitura(r) do processo ou apenas escrita(w), isso é devido ao pipe. Pode-se adicionar a letra 'e' e isso para setar a flag FD_CLOEXEC no final do descritor do arquivo.

(b) `pclose()`

(c) `fileno()`

2. Quais são as vantagens e desvantagens em utilizar:

(a) `popen()?`

(b) `exec()?`
