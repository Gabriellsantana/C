#include<iostream>
#include<cstdio>
#include<stdio.h> //Cont�m as fun��es padr�o de entrada e sa�da, como printf() e scanf().
#include<stdlib.h> //Fornece fun��es para aloca��o de mem�ria din�mica, controle de processo e outras opera��es de sistema.
#include<string.h> // Oferece fun��es para manipula��o de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
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
