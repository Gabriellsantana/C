#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite a operação (+  -  *  /): ";
    cin >> op;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Resultado: " << num1 + num2;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2;
            else
                cout << "Erro! Divisão por zero!";
            break;
        default:
            cout << "Operação inválida!";
            break;
    }

    return 0;
}

