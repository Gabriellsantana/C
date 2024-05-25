//8. Fazer um programa para mostrar os 100 primeiros termos da série de Fibonacci.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	
   int i,soma,a,b,x,y,t;
   a = 0;
   b = 1;
   for(i = 0; i <100; i++){
   	  soma = a + b;
   	  a = b;
   	  b = soma;
   	   printf(" %i\n",soma);
   };

};
