#include <stdlib.h>
#include<stdio.h>
/*
serve para alocar mémoria durante a execução do programa
FUNCIONAMNETO:
a função calloc() receber por parametro
-numero de elemento no array a ser alocado;
-tamanho de cada elemento do array
-NULL no caso de erro
-ponteiro para a primeira posição do array

*/

void* calloc (unsigned int num1, unsigned int num2){
	//não foi usada //isso aqui serve pra nada so pra inlustra
	//q calloc receber por parametro como uma função mais não é uma função
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
	
	free(p);//limpar ou liberar mémoria

};

