1. Cite as vantagens e desvantagens das comunicação serial:

(a) Assíncrona (UART).
    
    Vantagens: Melhor para aplicação em sensores, usa menos fios pois não precisa de um sinal de clock. 
    Simplicidade do protocolo, full-duplex.
    Desvantagens: O envio dos dados é mais complicado e susceptível a erros.
    
(b) SPI.
  
    Vantagens: Não há limite para o número de escravos, a comunicação é full-duplex e possui boa velocidade de comunicação.
    Não necessita de resistores de pull-up; 
    Desvantagens: Requer mais pinos do CI, suporta apenas um dispositivo mestre, nenhum protocolo de verificação de erros é definido.

2. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, e que a comunicação entre os dois é UART. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

       Sim, pois quando o MSP430 envia um bit, a raspberry pi já entende que a comuncação deve ser inicada.

3. Considere o caso em que a Raspberry Pi deve receber leituras analógico/digitais de um MSP430, que a comunicação entre os dois seja SPI, e que o MSP430 seja o escravo. É tecnicamente possível que o MSP430 mande os resultados da conversão A/D a qualquer hora, ou ele deve aguardar a Raspberry Pi fazer um pedido ao MSP430? Por quê?

       Não, pois o escravo não tem acesso ao clock, apenas o mestre, então ele não pode inicar a comunicação.

4. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via UART, como executar a comunicação com o segundo dispositivo?

5. Se o Raspberry Pi tiver de se comunicar com dois dispositivos via SPI, como executar a comunicação com o segundo dispositivo?
