

Para todas as questões, escreva os comandos correspondentes no terminal.

1 - Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.
  
  
    nano Ola_mundo.txt
    Olá mundo cruel! 
    CRTL + O
    CRTL + X
    cat Ola_mundo.txt

2 - Apresente o nome de todos os arquivos e pastas na pasta 'root'.
 
    sudo su
    cd /root
    ls -la

3 - Apresente o tipo de todos os arquivos e pastas na pasta 'root'.
 
    sudo su
    cd /root
    ls -l

4 - Apresente somente as pastas dentro da pasta 'root'.
    
    sudo su
    cd /root
    ls -d */

5 - Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.

    cal 11 2008
    cal 11 2009
    cal 11 2010
    cal 11 2011
    cal 11 2012
    cal 11 2013
    cal 11 2014
    cal 11 2015
    cal 11 2016
    cal 11 2017
    cal 11 2018
       
6 - Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

   Liste somente os arquivos com extensão .txt.
   
    ls -l *.txt
    
   Liste somente os arquivos com extensão .png.
   
    ls -l *.png

   Liste somente os arquivos com extensão .jpg.
    
    ls -l *.jpg

   Liste somente os arquivos com extensão .gif.
  
    ls -l *.gif

   Liste somente os arquivos que contenham o nome 'cal'.

    ls -l *cal*

   Liste somente os arquivos que contenham o nome 'tux'.
  
    ls -l *tux*

   Liste somente os arquivos que comecem com o nome 'tux'.
   
    ls -l tux*

