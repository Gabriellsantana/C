#include<iostream>
#include<cstdio>
#include<stdio.h> //Cont�m as fun��es padr�o de entrada e sa�da, como printf() e scanf().
#include<stdlib.h> //Fornece fun��es para aloca��o de mem�ria din�mica, controle de processo e outras opera��es de sistema.
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>
using namespace std;

main(){

   int n1 = 100;// var
   int n2 = 50;
  
   
   int *ponteiro;//declarando ponteiro 
   
   ponteiro =&n1; //atribuindo minha variavel ao ponteiro
   
   *ponteiro=10;// aqui estou add um novo valor no endere�o que esta apontado pela minha var n1

   
   printf("%d\n",ponteiro); //exebido o ponteiro que � o endere�o onde minha var esta na memoria RAM
   printf("%d\n",&n1);// com & (E-comercial) � possivel imprimir tambem o endereco da minha variavel
   printf("%d\n",n1);
   
   
   

	
};
