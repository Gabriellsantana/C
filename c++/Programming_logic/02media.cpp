#include <iostream>
using namespace std;

//quest�o 02 media
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
	    Neste c�digo, printf � usado para exibir
		as mensagens para o usu�rio e para exibir a m�dia.
		A formata��o %.1f diz ao printf para exibir 
		o n�mero em ponto flutuante (%f) com uma casa decimal (1).
	*/
};

