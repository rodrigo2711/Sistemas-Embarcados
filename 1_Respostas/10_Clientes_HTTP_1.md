1. Especifique algumas portas importantes pré-definidas para o protocolo TCP/IP.

       HTTP Porta 80
       HTTPS Porta 8080

2. Com relação a endereços IP, responda:

(a) Qual é a diferença entre endereços IP externos e locais?
  
    Endereços externos são os endereços públicos, ou seja, os vistos pela internet.
    Endereços locais são definidos para redes internas.
    
(b) Como endereços IP externos são definidos? Quem os define?

    São definidos como estáticos ou dinâmicos, dependendo da sua conexão. O proprietário do host atribui esse endereço.

(c) Como endereços IP locais são definidos? Quem os define?

    Definido pelo administrador da rede local e provavelmente um dos endereços privados especificados na RFC 1918.

(d) O que é o DNS? Para que ele serve?

    É uma resolução de nomes atribuidos a um endereço de IP. Serve para que um usuário possa acessar um servidor na rede sem a necessidade de decorar seu endereço IP, apenas sabendo seu nome. 
  
3. Com relação à pilha de protocolos TCP/IP, responda:

(a) O que são suas camadas? Para que servem?
    
    São como etapas da transmissão dos dados. Servem para dividir o processo em partes e facilitá-lo como um todo.
    
(b) Quais são as camadas existentes? Para que servem?

    Aplicação - Os dados são empacotados.
    Transporte - Executa o protocolo de rede (TCP/UDP), indicando os endereços de origem e destino.
    Rede - Responsável pelo gerenciamento dos pacotes, filas, etc. 
    Enlace - Responsável pelo encaminhamento/roteamento dos pacotes.
    Fisica - Roteadores, cabos propriamente ditos.

(c) Quais camadas são utilizadas pela biblioteca de sockets?

    As camadas de Aplicação e Transporte.
    
(d) As portas usadas por servidores na função bind() se referem a qual camada?

    À camada de Aplicação.    

(e) Os endereços usados por clientes na função connect() se referem a qual camada?

    À camada de Transporte
    
4. Qual é a diferença entre os métodos `GET` e `POST` no protocolo HTTP?
  
       GET: Faz requisição de uma página HTTP do endereço. 
       POST: Realiza o envio de uma página HTTP para o endereço.
