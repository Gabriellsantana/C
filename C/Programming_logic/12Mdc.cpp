#include <stdlib.h>
#include <stdio.h>

/* Fazer um programa para receber dois números do usuário e calcular o seu MDC
utilizando o método de Euclides. O programa deve continuar pedindo dois
números até que 0 e 0 sejam fornecidos. */

int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int a, b;

    do {
        printf("Digite um numero para A: ");
        scanf("%d", &a);
        
        printf("Digite um numero para B: ");
        scanf("%d", &b);
        
        if (a != 0 || b != 0) {
            printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
        }
    } while (a != 0 || b != 0);

    return 0;
}

