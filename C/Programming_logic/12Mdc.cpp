#include <stdlib.h>
#include <stdio.h>

/* Fazer um programa para receber dois n�meros do usu�rio e calcular o seu MDC
utilizando o m�todo de Euclides. O programa deve continuar pedindo dois
n�meros at� que 0 e 0 sejam fornecidos. */

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

