#include <iostream>
#include <cstdio>
using namespace std;

/*
3. Fazer um programa para ler um número do usuário e determinar se este número
é par ou não par.
*/

int numero;

main(){
	 printf("Informe um numero: ");
	 scanf("%d",&numero);
	 
	 if( numero % 2 == 0){
	 	 printf("Numero Par: %d \n",numero);
	 } else {
	 	  printf("Numero Impar: %d \n",numero);
	 };
	     

};
