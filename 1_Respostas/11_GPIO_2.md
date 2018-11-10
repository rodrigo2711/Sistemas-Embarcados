1. Defina qual modelo de Raspberry Pi você utilizará no projeto desta disciplina com o Raspberry Pi. Justifique sua escolha.

       Para execução do projeto será executada a Raspberry Pi 3 Model B. Ele foi escolhido devido ao seu rápido processamento, pois o projeto será executado em tempo real e contará com processamento de imagem.
  
2. Defina qual sistema operacional você utilizará no projeto desta disciplina com o Raspberry Pi. Justifique sua escolha.

       O sistema operacional utilizado será o Raspbian, por ser um sistema completo, que oferece todas as ferramentas necessárias para o projeto e ao mesmo tempo temos a interface de um desktop.
    
3. Defina de qual forma você instalará o sistema operacional escolhido. Escreva o passo-a-passo da instalação e forneça os links necessários para isto.
      
      
        Passo 1: Para a instalação do raspbian, baixamos a imagem do sistema no link abaixo. 
        https://www.raspberrypi.org/downloads/raspbian/
        Ao abrir o link, vamos onde está escrito RASPBIAN STRETCH WITH DESKTOP e clicamos em Download ZIP.
        Passo 2: Após completar o download da imagem, entramos pelo terminal do Ubuntu na pasta de download e descompactamos o arquivo utilizando:
            unzip <nome do arquivo.zip>
       Passo 3: Fazemos o download do programa Win32 Disk Imager no link abaixo.
       https://sourceforge.net/projects/win32diskimager/
       Ao abrir o link, clique em download e aguarde o processo.
       Passo 4: Insira o cartão SD formatado no computador.
       Passo 5: Abra o programa Win32DiskImager, localize a imagem do Raspbian que você baixou.
       Passo 6: No Win32DiskImager, garanta que a unidade que representa seu cartão está selecionada em “Device”.
       Passo 7: Clique em “Write” e posteriormente em “Yes”.     
      
4. Defina de qual forma você desenvolverá software para o Raspberry Pi no projeto desta disciplina. Escreva o passo-a-passo do desenvolvimento e forneça os links necessários para isto.
    
        O software será desenvolvido através do SSH, remotamente. Será criado códigos em C e eles serão compilados pelo GCC.




