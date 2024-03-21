#include <iostream>
#include <cstdio>
#include <locale.h>

using namespace std;
/*
04 Fazer um programa para receber valores inteiros X, Y e Z do usuário e
determinar se estes valores podem formar os lados de um triângulo. Em caso
afirmativo, informar se o triângulo é eqüilátero, isósceles ou escaleno.

*/

   int x, y, z,soma1,soma2,soma3;

main(){
	   setlocale(LC_ALL, "Portuguese");
	   
	 printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    printf("Digite o valor de Z: ");
    scanf("%d", &z);
    
    soma1 = x+y;
    soma2 = x+z;
    soma3 = y+z;

    if ( soma1 > z && soma2 > y && soma3 > x) {
        printf("Os valores podem formar um triângulo.\n");

        if (x == y && y == z) {
            printf("O triângulo é equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os valores NÃO podem formar um triângulo.\n");
    };
	
	
	/*para saber se 3 valores forma um triangulo  a soma de dois lados tem que ser sempre maior do que um lado
	
	 triângulo, o comprimento de cada lado é menor do que a soma dos comprimentos dos outros dois lados.*/
	
	
	
	
	
};
