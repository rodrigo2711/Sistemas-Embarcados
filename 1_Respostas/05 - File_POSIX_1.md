

1 -    Considerando a biblioteca-padrão da linguagem C, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
  
    Abrir: FILE *fopen (char *nome_do_arquivo, char*modo)
    Fechar: int fclose (FILE *ponteiro_para_arquivo);
  
(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
  
    Escreve um caractere em um stream
    int putc (int ch, FILE *fp);

    Escreve uma strin g em um stream:  
    char *fputs (char *str,FILE *fp);

    Escreve bloco de dados em um stream:
    unsigned fwrite (void *buffer,int numero_de_bytes,int count,FILE *fp); --

    Escreve caracteres formatados em stdout:
    int printf (char *str,...);

    Escreve caracteres formatados em uma string:
    int sprintf ( char * str, const char * format, ... );

    Escreve caracteres formatados em stream:
    int fprintf ( FILE * stream, const char * format, ... );
  
  
(c) Quais são as funções (e seus protótipos) para ler arquivos?

    Le um caractere em um stream
    int getc (FILE *fp);

    Le uma strin g em um stream:  
    char *fgets (char *str, int tamanho,FILE *fp);

    Le bloco de dados em um stream:
    unsigned fread (void *buffer, int numero_de_bytes, int count, FILE *fp);

    Le caracteres formatados em stdout:
    int scanf (char *str,...);

    Le caracteres formatados em uma string:
    int sscanf ( const char * s, const char * format, ...);

    Le caracteres formatados em stream:
    int fscanf ( FILE * stream, const char * format, ... );

  
(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
 
    int fseek ( FILE * stream, long int offset, int origin );

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
 
    Biblioteca stdio.h

2 -    O que é a norma POSIX?

3 -    Considerando a norma POSIX, responda:
(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
 
    Abrir:  int open (const char*path(1), int oflag(2), ..);
    (1) - caminho do arquivo
    (2) - Flag de abertura (O_WRONLY, O_RDONLY,O_RDWR, O_CREAT)

    Fechar: int close(int fildes(1))
    (1) - Descrição de arquivo.

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

    ssize_t(1) write(int fildes(2), const void *buf(3), size_t nbyte(4))
  
    (1) - Numero de bytes escritos ou erro
    (2) - Descritor de arquivo
    (3) - Endereço de buffer
    (4) - Numero de bytes a ser escrito
    
(c) Quais são as funções (e seus protótipos) para ler arquivos?
   
    ssize_t(1) read(int fildes(2), void *buf(3), size_t nbyte(4))
   
    (1) - Numero de bytes lidos ou erro ou EOF
    (2) - Descritor de arquivo
    (3) - Endereço de buffer
    (4) - Numero de bytes a serem lidos

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

    off_t(1) Iseek (int fd(2), off_t offset(3), int whence(4))
   
    (1) - Offset
    (2) - Descritor de arquivo
    (3) - Valor de offset
    (4) - SEEK_SET, SEEK_CUR_SEEK_END
    

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
    
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <termios.h>
    
