#include<stdlib.h>
#include<stdio.h>

/*
realocar o calloc para uma  novo m�moria ex: aloquei 200 bytes mais 
o meu ponteiro/vetor preciso de 400 em vez de cria um novo calloc
� so realocc realocar ele para um novo espa�o de m� moria de 400 bytes
*/


main(){
	int *num = (int*) malloc(200);
	
	num = (int*)realloc (num,300);
	 
	free(num);
};
