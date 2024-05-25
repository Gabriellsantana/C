#include<iostream>
#include<cstdio>
#include<stdio.h> //para usar o gets para ler sring.
#include<stdlib.h> //Fornece fun��es para ALOCA��O DIN�MICA
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>

struct ponto {
	int y,x; //4+4 =8  s�o duas variavel ent�o cada variavel vale 4 byte
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
Em C, o formato %lu � usado para imprimir valores do tipo unsigned long.O sizeof retorna um valor do tipo size_t, 
que � geralmente um unsigned long, representando o tamanho de um tipo de dado em bytes.
Portanto, %lu � usado para imprimir esse valor.
Por outro lado, %f � usado para imprimir valores de ponto flutuante (float) com a fun��o printf(). 
Se voc� usar %f com sizeof(float), n�o obter� o resultado desejado, pois %f espera um valor do tipo float, enquanto sizeof(float) retorna um valor inteiro (size_t), que precisa ser tratado com %lu.
*/
