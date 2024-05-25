#include <iostream>
using namespace std;

//questão 02 media
float n1, n2, n3, media;


main(){
	
   printf("Informe sua nota:  ");
     scanf("%f",&n1);
   printf("Informe sua nota:  ");
     scanf("%f",&n2);
   printf("Informe sua nota:  ");
     scanf("%f",&n3);
   
    media = (n1+n2+n3)/3;
    
    printf("Sua media foi %.1f\n",media);
	
	/*
	    Neste código, printf é usado para exibir
		as mensagens para o usuário e para exibir a média.
		A formatação %.1f diz ao printf para exibir 
		o número em ponto flutuante (%f) com uma casa decimal (1).
	*/
};

