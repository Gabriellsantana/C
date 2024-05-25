#include<iostream>
#include<cstdio>
#include<stdio.h> //Contém as funções padrão de entrada e saída, como printf() e scanf().
#include<stdlib.h> //Fornece funções para alocação de memória dinâmica, controle de processo e outras operações de sistema.
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
using namespace std;

struct pessoa {
	char nome[50];
	int idade;
};

main(){
	
	pessoa p1;
	pessoa p2;
	pessoa p3;
	
    strcpy(p1.nome,"Gabriel");
    p1.idade = 20; 
    strcpy(p2.nome,"Mariana");
    p2.idade= 35;
    strcpy(p3.nome,"Edvaldo");
    p3.idade= 50;
    
    printf("Nome......:%s\n",p1.nome);
    printf("idade.....:%d\n\n",p1.idade);
    
    printf("Nome......:%s\n",p2.nome);
    printf("idade.....:%d\n\n",p2.idade);
    
    printf("Nome......:%s\n",p3.nome);
    printf("idade.....:%d\n\n",p3.idade);
    
	
};
