#include<iostream>
#include<cstdio>
#include<stdio.h> //Cont�m as fun��es padr�o de entrada e sa�da, como printf() e scanf().
#include<stdlib.h> //Fornece fun��es para aloca��o de mem�ria din�mica, controle de processo e outras opera��es de sistema.
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
using namespace std;

struct Carro {
	int ano;
	float preco;
	
    void valor (int vano, float vpreco){
    	ano =vano;
    	preco=vpreco;
	};
	void mostra (){
		printf("Ano: %d  Preco %.3f \n\n",ano,preco);
	};
};

main(){
	
	Carro car1;
	Carro car2;
	
	car1.valor(2013,12.000);
	car2.valor(2024,30.000);
	
	car1.mostra();
	car2.mostra();

	  
   return 0;
}
