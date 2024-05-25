#include<stdio.h>
#include<stdlib.h>

/*17Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar
 com um valor negativo o programa pára de pedir valores e calcula a média dos valores já fornecidos.*/
 
main(){
	
	int n,i,soma;
	float media;
	n = 1;
	i =0;
	soma =0;
	
	while( n > 0 ){
		
	  printf("digita um numero ");
	  scanf("%d",&n);
	 
	  if(n > 0 ){
	  	 i++;  
	  	 soma = n + soma;
	  };
	  
	};
	if(i>0){
		media = soma/i;
	};

	printf("\n A soma dos numeros foi %d",soma);   
	printf("\n Media: %.1f",media);
};
 
 
