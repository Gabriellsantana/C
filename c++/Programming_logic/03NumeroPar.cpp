#include <iostream>
#include <cstdio>
using namespace std;

/*
3. Fazer um programa para ler um n�mero do usu�rio e determinar se este n�mero
� par ou n�o par.
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
