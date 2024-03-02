#include <iostream>

using namespace std;

int main() {
    char operador;
    float numero1, numero2;

    cout << "Digite um operador (+, -, *, /): ";
    cin >> operador;

    cout << "Digite dois n�meros: ";
    cin >> numero1 >> numero2;

    switch (operador) {
        case '+':
            cout << "Resultado: " << numero1 + numero2;
            break;
        case '-':
            cout << "Resultado: " << numero1 - numero2;
            break;
        case '*':
            cout << "Resultado: " << numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0)
                cout << "Resultado: " << numero1 / numero2;
            else
                cout << "Erro! Divis�o por zero!";
            break;
        default:
            cout << "Operador inv�lido!";
            break;
    }

    return 0;
}



