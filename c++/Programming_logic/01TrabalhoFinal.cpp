#include <iostream>
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#include<locale.h>

#define MAX_USUARIOS 100
#define MAX_LIVROS 100


using namespace std;

char usuario[50];
char usuario2[50];
char senha2[50];
char senha[50];

char livro[50][50];
int cont,op,vet,i;




main(){
	
	setlocale(LC_ALL,"Portuguese");

	
	while (op != 4) {
     
	 printf("[1] Se-Cadastre \n");
	 printf("[2] Cadastre Livro \n");
	 printf("[3] Emprestimo \n");
	 printf("[4] Sair \n");
     printf("\n") ;
     scanf("%d",&op);
       system("cls");//limpa tela
	  
    	switch (op) {
		case 1:
		    
			printf("NOME DE USUSARIO: \n");
			fflush(stdin);
			gets(usuario);	
			fflush(stdin);

			printf("INFORME UMA SENHA NUMERICA: \n");
			fflush(stdin);
			gets(senha);
			fflush(stdin);
			
			vet ++;
			 system("cls");
			
		break; 
		case 2:
			     printf("Cadastre [LIVRO] sem usar espaço : \n");
			     scanf("%s",&livro[cont]);
			     cont ++;	     
			     system("cls");//limpa tela
		break;
		case 3:
			//login emprestimo
			printf("------[ login ]----->> \n");
			printf("\n");
			
			printf("Usuario: ");
			fflush(stdin);
			gets(usuario2);
			fflush(stdin);
			
			printf("Senha: ");
			fflush(stdin);
			gets(senha2);
			fflush(stdin);
			
			system("cls");//limpa tela
			
			//verificando login	
		  if(strcmp(usuario,usuario2) == 0 && strcmp(senha,senha2) == 0){
		  	 printf("Bem vindo [ %s ] qual livro você deseja adiquirir por Empréstimo? \n",usuario);
		  	 printf("\n");
		  	 for (i = 0; i <= cont; i++){
		  	 	  printf("%s\n",livro[i]);
			   };
		  }else{
		  	 printf("Usuario e senha Invalidos  erro 404 \n");
		  };
			  
		break;
		case 4:
			 printf("[SESSAO ENCERRADA]\n");
		break; 
		
		default :
		 printf("\n opcao do Menu [INVALIDA ERRO 404] \n");
	};
		
	};
	
		
};

/*documentação  : logica  que eu pensei para o sistema cadastra um usuario por vez no vetor
  ate pq no for que esta no case 1  com o vetor senha e nomeUsuario assim que eu iniciasse esse trecho 
  do código ele iria rodar todas posição dos vetores na promeira vez , e o sistema é para varios ususarios, 
  então o cadastro tem que  ser feito de um de uma vez  , então  criei cont (que meu conmtador) e no for determinei 
  que ele rodasse apenas uma vez indepedente do tamanho do meu vetor então se enteder que ele vai precher apenas 
  uma posição do meu vetor , só que ele estava apenas a posição que eu determinei pro contado que foi 1 cont =1
  então qundo ele rodava novamente ele tava subistuindo os valores apenas dessa posição
  então criei outra variavel de controle que foi vet então meu vetor iria recbere o vet
  que estava sempre recebendo +1  vet = vet+1 então a vcada loop do sistema meu vet estaria
  com um valor a mais e diferente , meu vetor coimo ficou senha[vet]
  
  na hora de exbir na tela  foi um pouco diferente eu tive que usar o cont senhas[cont] não compreedir
  muito mais de alguma forma desse jeito ele mostras as posição  do vet quando eu fiz senha[vet] ele
  não ezebiu nada mais acho tem mais a ver com o for
  
  


*/
