#include <iostream>

using namespace std;

/*
5. Fazer um programa que recebe 3 valores n�o inteiros do usu�rio e mostra o
maior deles, o menor deles e a m�dia.
*/

float num1,num2,num3,media,numer,maior,menor;

main(){
 
     printf("Digite valor #1 : ");
       scanf("%f",&num1);
      printf("Digite valor #2 : ");
        scanf("%f",&num2);
       printf("Digite valor #3 : ");
          scanf("%f",&num3);

     if (num1 > num2 && num1 > num3){
	     maior = num1;
	 }else if (num2 > num1 && num2 > num3){
	   	 maior = num2;
	 } else if (num3 > num1 && num3 > num2){
	 	 maior = num3;
	 }else{
	   printf("Todos os numeros s�o iguais");	
	 };
	 
	 if (num1 < num2 && num1 < num3){
	     menor = num1;
	 }else if (num2 < num1 && num2 < num3){
	   	 menor = num2;
	 } else if (num3 < num1 && num3 < num2){
	 	 menor = num3;
	 }else{
	   printf("Todos os numeros s�o iguais");	
	 };
	 
	 media = (num1+num2+num3)/3;
	 
	 printf("A M�dia  : %.1f\n",media);
	 printf("Maior : %.1f\n",maior);
	 printf("Menor : %.1f\n",menor);



};
