#include<iostream>
#include<cstdio>
#include<stdio.h> //Contém as funções padrão de entrada e saída, como printf() e scanf().
#include<stdlib.h> //Fornece funções para alocação de memória dinâmica, controle de processo e outras operações de sistema.
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>
using namespace std;

main(){

   int n1 = 100;// var
   int n2 = 50;
  
   
   int *ponteiro;//declarando ponteiro 
   
   ponteiro =&n1; //atribuindo minha variavel ao ponteiro
   
   *ponteiro=10;// aqui estou add um novo valor no endereço que esta apontado pela minha var n1

   
   printf("%d\n",ponteiro); //exebido o ponteiro que é o endereço onde minha var esta na memoria RAM
   printf("%d\n",&n1);// com & (E-comercial) é possivel imprimir tambem o endereco da minha variavel
   printf("%d\n",n1);
   
   
   

	
};
