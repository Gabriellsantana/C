#include<stdio.h>
#include<stdlib.h>

/*
11. Fazer um programa para receber um número do usuário e decompô-lo em fatores
primos.
*/

main(){
	int numero,i,divisao;
	divisao = 2;
	
	printf("Digite um numero ");
	scanf("%d",&numero);
	
	while(numero>1){
		if(numero% divisao == 0){
			
			printf("\ndivisor %d ",divisao);
			printf("numero %d",numero);
			numero = numero / divisao;
			
		}else{
			divisao++;
		};
		
	};
};
