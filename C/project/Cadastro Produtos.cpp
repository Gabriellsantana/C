#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <locale.h>

#define max_produto 100


char produto [max_produto][50];
int op,cont,quant,lista,ex, contsenha,numproduto;
 char senha[50]; 

main(){

	 setlocale(LC_ALL, "pt_BR");
	while(op != 3){
	
	printf("\n        MENU           \n");
	printf("[1] cadastra produto \n");
	printf("[2] lista Produtos \n");
	printf("[3]     sair \n");
	scanf("%d",&op);
	system("cls"); //limpa tela
	switch (op){
		case 1:
		 printf("\nQuantos Produtos Voce vai cadastra: ");
		 scanf("%d",&quant);
		  system("cls"); //limpa tela

			for(cont =1; cont <= quant; cont++){
				printf("\nEntao vamos-la cadestre seus produtos: ");
				
				  fflush(stdin);
			      gets(produto[cont]);
			      fflush(stdin);
			};
			system("cls"); //limpa tela
			printf("\npronto produtos cadastrados . . .  .\n");
		break;
		case 2:
			for(lista =1; lista < cont; lista++){
				printf("%d %s \n",lista,produto[lista]);
			};
			printf("\nexcluir produto [posicao]   sair [00]:\n");
			scanf("%d",&ex);
			  if (ex >= 1 && ex <= cont){
			  	
			  	printf("para confirma digite a senha: ");
			  	  fflush(stdin);
			  	  gets(senha);
			  	  fflush(stdin);
			    if(strcmp(senha, "1234") == 0){
			    	for(cont = ex ; cont < numproduto -1; cont++ ){
			    	strcpy(produto[cont -1], produto[cont]);
			    };
			        numproduto--;
			        	printf("\nproduto excluido com sucessoo . .  .\n");
				} else{
					printf("\n senha invalidar \n");
				};
				
			 
			  }else{
			  	  printf("\nsair");
			  };
  
		break;
		case 3:
			printf("\n saindo . . .   .\n");
		break;
	};
	
  };
};
