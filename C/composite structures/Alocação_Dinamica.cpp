#include<iostream>
#include<cstdio>
#include<stdio.h> //para usar o gets para ler sring.
#include<stdlib.h> //Fornece funções para ALOCAÇÂO DINÂMICA
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>

struct ponto {
	int y,x; //4+4 =8  são duas variavel então cada variavel vale 4 byte
};

main(){
	
	  //char: 1 byte
	  //int:  4 bytes
	  //float 4 bytes
	 //double 6 bytes  
	  
	  char *nome;  //char nome [50] aqui determina 50 
	  nome =(char *) malloc(sizeof(char)); // determinando que quando o dado for atribuido a variavel ai sim ele determina o tamanho alocado na memoria
	  
	  strcpy(nome,"Gabriel");
	
	 
	 printf("char %lu \n",sizeof(char)); // tamanho da minha variavel tipo %lu tem haver com printf   sizeof() para ver tamnho
	 printf("int %d \n",sizeof(int));
	 printf("float %lu \n",sizeof(float));
	 printf("double %d \n",sizeof(double));
	 printf("Struct %d",sizeof(ponto));
};

/* 
Em C, o formato %lu é usado para imprimir valores do tipo unsigned long.O sizeof retorna um valor do tipo size_t, 
que é geralmente um unsigned long, representando o tamanho de um tipo de dado em bytes.
Portanto, %lu é usado para imprimir esse valor.
Por outro lado, %f é usado para imprimir valores de ponto flutuante (float) com a função printf(). 
Se você usar %f com sizeof(float), não obterá o resultado desejado, pois %f espera um valor do tipo float, enquanto sizeof(float) retorna um valor inteiro (size_t), que precisa ser tratado com %lu.
*/
