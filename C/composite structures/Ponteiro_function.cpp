#include<iostream>
#include<cstdio>
#include<stdio.h> //para usar o gets para ler sring.
#include<stdlib.h> //Fornece fun��es para ALOCA��O DIN�MICA
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>
using namespace std;

void somar (float *n1, float n2){
	  *n1+=n2;
};//fun��o para altera valor da variavel com ponteiro

void altera ( float *n3 ,float n4){
	*n3=n4;
};//fun��o para altera valor da variavel com ponteiro

main(){
	
	float num=0;
	float num1=30;
	
	somar(&num,15);	
	altera(&num1,50);
	
	printf("%.0f \n",num);
	printf("%.0f \n",num1);
	
	
	int n1 = 10; //variavel
	int *ponteiro;// criando ponteiro "tipo * nome"	
	
	ponteiro = &n1; // atribuindo a variavel a ponteiro com "&" para saber onde a variavel ta alocada na memoria
	
	printf("Ed.Memoria RAM: %d - Variavel :%d valor \n",ponteiro,n1);//exbindo ponteiro e variavel 
	
	return 0;
};

/*
Usar ponteiros em fun��es � necess�rio em v�rias situa��es,
principalmente quando voc� deseja modificar o valor de uma 
vari�vel fora da fun��o, ou quando 
deseja evitar copiar grandes volumes de dados na mem�ria.

*/
