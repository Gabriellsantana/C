#include <iostream>

using namespace std;

/*

7. O número 3025 possui a seguinte característica: 30 + 25 = 55 -&gt; 55*55 = 3025.
Fazer um programa para obter todos os números de 4 algarismos com a mesma
característica do número 3025.
*/

int main() {
    printf("Numeros com a mesma caracteristica do numero 3025:\n");

    int numero = 1000;

    while (numero < 10000) {
        int parte1 = numero / 100;
        int parte2 = numero % 100;

        int soma = parte1 + parte2;
        int quadrado = soma * soma;

        if (quadrado == numero) {
            printf("%d\n", numero);
        };

        numero++;
    };

    return 0;
};
