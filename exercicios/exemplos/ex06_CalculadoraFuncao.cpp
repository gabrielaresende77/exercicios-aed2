/*
Crie um programa em C++ que funcione como uma calculadora simples.
O programa deve:

Solicitar dois números ao usuário.
Solicitar um operador (+, -, * ou /).
Realizar a operação correspondente usando uma função.

Tratar divisão por zero e operador inválido, exibindo mensagens de erro.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Função que realiza as operações matemáticas
double calculadora(double num1, double num2, char operador) {
    double resultado;

    // Verifica o operador e realiza a operação correspondente
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
                return 0;
            }
            break;
        default:
            cout << "Operador inválido!" << endl;
            return 0;
    }

    return resultado;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    double num1, num2;
    char operador;

    // Entrada do usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Chama a função calculadora e exibe o resultado
    double resultado = calculadora(num1, num2, operador);
    cout << "Resultado: " << resultado << endl;

    return 0;
}