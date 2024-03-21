#include<stdio.h>
#include<iostream>
#include<cstdio>

using namespace std;

int matriz1[3][3];
int matriz2[3][3];
int soma[2][2];

int coluna,linha;

main(){
	
	for(coluna =0; coluna <3; coluna++){  
		for(linha = 0; linha <3; linha++){
		    printf(" coluna [%i] linha [%i] ",coluna,linha);
			scanf("%i",&matriz1[coluna][linha]);
			
		};
	};
	
	//	for(coluna =0; coluna <3; coluna++){  
	//	for(linha = 0;linha <3; linha++){
	//	    printf("coluna [%i] linha [%i] ",coluna,linha);
	//		scanf("%i",&matriz2[coluna][linha]);
			
	//	};
//	};
	
	  	for(coluna =0; coluna <3; coluna++){  
		for(linha = 0; linha <3; linha++){
		    printf(" %i ",matriz1[coluna][linha]);
		};
	};
	
	  
};
