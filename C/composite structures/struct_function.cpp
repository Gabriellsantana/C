#include<iostream>
#include<cstdio>
#include<stdio.h> //Contém as funções padrão de entrada e saída, como printf() e scanf().
#include<stdlib.h> //Fornece funções para alocação de memória dinâmica, controle de processo e outras operações de sistema.
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
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
