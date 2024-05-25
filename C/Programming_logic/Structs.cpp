#include<iostream>
#include<cstdio>
#include<stdio.h> //Contém as funções padrão de entrada e saída, como printf() e scanf().
#include<stdlib.h> //Fornece funções para alocação de memória dinâmica, controle de processo e outras operações de sistema.
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
using namespace std;

struct carro {
	char nome[50];
	int ano;
	char cor[50];
	
	void valores ( int vano){	
		ano=vano;
	};
	
	void mostra (){
		printf(" o ano do carro e %d \n",ano);
	};
};


int main(){
	
	
	    carro *carros =new carro[3];
	    carro car1,car2,car3;
	    
	    carros[0]=car1; carros[1]=car2; carros[2]=car3;
	    
	    carros[0].valores(2009);
	    carros[1].valores(2010);
	    carros[2].valores(2024);
	    
	    for (int i =0; i <3; i++){
	    	
	    	carros[i].mostra();
		}
    
        
		return 0;
};
