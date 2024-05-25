#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


//09 Fazer um programa para mostrar todos os números perfeitos entre 1 e 100.

main(){
   
       int num, divisor, soma;

    printf("Numeros perfeitos entre 1 e 100:\n");

    for(num = 1; num <= 100; num++) {
        soma = 0;

        for(divisor = 1; divisor < num; divisor++) {
            if(num % divisor == 0) {
                soma += divisor;
            };
        };

        // Verificar se é um número perfeito e exibi-lo
        if(soma == num) {
            printf("%d\n", num);
        };
    };


};
