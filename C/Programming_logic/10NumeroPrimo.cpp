#include<iostream>
#include<stdlib.h>
#include<stdio.h>
/*
10. Fazer um programa para receber um n�mero inteiro do usu�rio e determinar se
este n�mero � primo ou n�o.
*/

main(){
	
	int numero,primo,naoprimo;
	primo = 0;
	naoprimo =0;
	
	printf("Digite um numero inteiro:  ");
	scanf("%d",&numero);
	
	for(int i = 1; i <= numero; i++){
		if(numero % i == 0){
			primo++;
			naoprimo++;
		};
	};
	
	if (primo == 2){
		printf("\n%d numero PRIMO",numero);
	}else{
		printf("\n%d NAO e numero PRIMO ",numero);
		printf("\nTotal de Divisao: %d ",naoprimo);
	};

	return 0;
};
