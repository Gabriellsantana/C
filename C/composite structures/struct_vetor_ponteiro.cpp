#include<iostream>
#include<cstdio>
#include<stdio.h> //Cont�m as fun��es padr�o de entrada e sa�da, como printf() e scanf().
#include<stdlib.h> //Fornece fun��es para aloca��o de mem�ria din�mica, controle de processo e outras opera��es de sistema.
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
using namespace std;

struct Turma{
	
	char aluno [50];
	float nota1;
	float nota2;
	float media;

	
    void nota (){ //fun��o
         media = (nota1+nota2)/2;	
	};
	void in  (char nome [50],float n1, float n2){
		strcpy(aluno,nome);
		nota1=n1;
		nota2=n2;
	};

};

main(){
	
	Turma *aluno =new Turma[3]; //ponteiro
	
	strcpy(aluno[0].aluno,"Gabriel"); aluno[0].nota1 =10;  aluno[0].nota2=9;
	
	strcpy(aluno[1].aluno,"Mariana");
	aluno[1].nota1 =5.7;
	aluno[1].nota2 = 8;
	
	aluno[2].in("Matheus",5,3);
	
	for(int i =0; i<3; i++){
		printf("Nome : %s \n",aluno[i].aluno);
		printf("Av.1 : %.1f \n",aluno[i].nota1);
		printf("Av.1 : %.1f \n\n",aluno[i].nota2);
		aluno[i].nota();
	};
	   printf("5 APROVADO  -5 REPROVADO\n\n");
	for (int i=0; i<3;i++){
	     
	     printf("Aluno: %s Media: %.1f\n",aluno[i].aluno,aluno[i].media);
	}
    
};
