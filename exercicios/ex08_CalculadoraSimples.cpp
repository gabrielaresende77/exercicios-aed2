/*
Crie um programa que simule uma calculadora com as 4 operações básicas
(soma, subtração, multiplicação e divisão), utilizando funções para cada operação.
*/

#include <iostream>
#include <locale.h>
using namespace std;

float soma(float x, float y) {
    return x + y;
}

float produto(float x, float y) {
    return x * y;
}

float subtracao(float x, float y) {
    return x - y;
}

float divisao(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Erro: divisão por zero!\n";
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    float a, b;
    int op = -1;

    cout << "======= Calculadora ======\n";
    do {
        cout << "\nEscolha uma das operações:\n"
             << "1 - Soma\n"
             << "2 - Multiplicacao\n"
             << "3 - Subtracao\n"
             << "4 - Divisao\n"
             << "0 - Sair\n"
             << "Digite sua escolha: ";
        cin >> op;

        if (op >= 1 && op <= 4) {
            cout << "Valor 1: ";
            cin >> a;
            cout << "Valor 2: ";
            cin >> b;
        }

        switch (op) {
            case 1:
                cout << "Resultado = " << soma(a, b) << "\n";
                break;
            case 2:
                cout << "Resultado = " << produto(a, b) << "\n";
                break;
            case 3:
                cout << "Resultado = " << subtracao(a, b) << "\n";
                break;
            case 4:
                cout << "Resultado = " << divisao(a, b) << "\n";
                break;
            case 0:
                cout << "Programa encerrado!\n";
                break;
            default:
                cout << "Opcao invalida!\n";
                break;
        }
    } while (op != 0);

    return 0;
}