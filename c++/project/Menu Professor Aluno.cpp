#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

void lista(char aluno[50], char pro[50], char curso1[50], char curso2[50]){
	
	printf("Lista de Alunos e Professor:\n");
	printf("\nAluno: %s \n",aluno);
	printf("Curso: %s",curso1);
	printf("\n");
	printf("\nProfessor: %s \n",pro);
	printf("Curso: %s \n\n",curso2);	
}

char excluirAluno (char n1[50], char n2[50]){
	  strcpy(n1, " ");
	  strcpy(n2, " ");
}
char excluirPro (char n3[50], char n4[50]){
	  strcpy(n3, " ");
	  strcpy(n4, " ");
}

main(){
	
	int op,opp;
	char alu[50],prof[50];
	char cursoA[50],cursoP[50];
	
    while(op != 5){
      printf("[1] Cadastra\n");
      printf("[2] lista\n");
      printf("[3] Excluir\n");
      printf("[4] Mapa da sala\n");
      printf("[5]   sair    \n\n");
      scanf("%d",&op);
      system("cls");
	
	switch(op){
		
		case 1:
			printf("\nCadastr: [1] Aluno [2] Professor \n\n");
			scanf("%d",&opp);
			system("cls");
			
			  if(opp == 1){
			  	
			  	  printf("Aluno Nome: ");
			        scanf("%s",&alu);
			      printf("Nome do curso: ");
			        scanf("%s",&cursoA);
			         system("cls");
			      printf("cadastro feito com sucesso . .   . \n\n");

			  } else if (opp == 2) {
			  	
			  	printf("Professor Nome: ");
			  	  scanf("%s",&prof);
			  	printf("Nome do curso que vai adiministra aulas: ");
			      scanf("%s",&cursoP);
			      
			  	    system("cls");
			      printf("cadastro feito com sucesso . .   . \n\n");
			      
			  } else { 
			  	printf("opcao invalida");	  	
			  };
			  
		break;
		
		case 2:
			lista(alu,prof,cursoA,cursoP);
		break;
		  
		case 3:
			printf("\nEXCLUIR: [1] Aluno [2] Professor \n\n");
			scanf("%d",&opp);
			system("cls");
			
			  if(opp == 1){
			  	excluirAluno(alu,cursoA);
			  	printf("Excluir Bem-Sucessidio verfifique sua Lista\n\n");
			  } else if (opp == 2) {
			  	excluirPro(prof,cursoP);
			  	printf("Excluir Bem-Sucessidio verfifique sua Lista\n\n");  
			  } else { 
			  	printf("opcao invalida");	  	
			  };
		break;
		
		case 4:
			   printf("Mapa da Sala\n\n");
			   printf("O aluno %s esta cursando o curso %s \n",alu,cursoA);
			   printf("O Professor %s esta adiministrando aula no curso %s\n\n",prof,cursoP);
		break;
		case 5:
			printf("Saindo . . .  .");
		break;
		
		default:
		   printf("opcao do Menu Invalida \n\n");
		break;
		
	};
		
	};
	
	
};
