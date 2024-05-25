#include <stdio.h>

// Função para calcular o MDC (Máximo Divisor Comum) usando o algoritmo de Euclides
int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Função para calcular o MMC (Mínimo Múltiplo Comum) usando o MDC
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Calcula e exibe o MMC
    printf("O MMC de %d e %d eh: %d\n", num1, num2, mmc(num1, num2));

    return 0;
}

