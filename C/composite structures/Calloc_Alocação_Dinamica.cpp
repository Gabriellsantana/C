#include <stdlib.h>
#include<stdio.h>
/*
serve para alocar m�moria durante a execu��o do programa
FUNCIONAMNETO:
a fun��o calloc() receber por parametro
-numero de elemento no array a ser alocado;
-tamanho de cada elemento do array
-NULL no caso de erro
-ponteiro para a primeira posi��o do array

*/

void* calloc (unsigned int num1, unsigned int num2){
	//n�o foi usada //isso aqui serve pra nada so pra inlustra
	//q calloc receber por parametro como uma fun��o mais n�o � uma fun��o
	// p =(int *) "calloc(5,sizeof(int));"
	return 0;
}

main(){
 
 int *p;
   p =(int *) calloc(5,sizeof(int));
    if (p==NULL){
    	printf("erro sem memoria");
    	exit(1); //termina o programa
	};
	for (int i =0; i<5;i++){
		printf("Digite P[%d] ",i);
		scanf("%d",&p[i]);
	};
	
	free(p);//limpar ou liberar m�moria

};

