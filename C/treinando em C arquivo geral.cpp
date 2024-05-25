#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

#define max_time 20

//for - para  //while - equanto //reita-ate do-while

main(){
    char time[5][max_time];
    int op,i,ex;

    while(op!=4) {
    	printf("\n[1] Cadastra");
    	printf("\n[2] Remover");
    	printf("\n[3] lista");
    	printf("\n[4] Sair\n\n");
    	scanf("%d",&op);
    	system("cls");
    	
    	switch(op){
    		case 1:
    			printf("\nNome do Time: ");
    			fflush(stdin);
    			gets(time[i]);
    			fflush(stdin);
    			 i++;
    			 system("cls");
    			 printf("GooooooLLLLLLLLLLLLL \n");
    			break;
    		case 2:
    			   printf("R E M O V E R \n");
    			  for(i=0; i<5; i++){
    			  	 printf("\n %d - %s",i,time[i]);
				  };
    			printf("\nqual posicao esta o time: ");
    			scanf("%d",&ex);
    			
    			  if (ex >= 0 && ex < 5) {
                    strcpy(time[ex], ""); 
                   };
    			   
    			break;
    		case 3:
    			 printf("Lista Do Campeonato\n");
    			  for(i=0; i<5; i++){
    			  	 printf("\n %d - %s",i,time[i]);
				  };
    			break;
    		case 4:
    			break;
    		default:
    			printf("posicao ivalida\n");

		};
	};
	

	 //cotinuar

	return 0;
	
	
};
