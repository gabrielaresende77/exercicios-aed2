/*
Crie um programa que utilize uma struct Operacao para armazenar dois operandos
e o resultado, e realize as quatro operações matemáticas básicas:
Soma
Subtração
Multiplicação
Divisão

O programa deve:
Solicitar ao usuário os dois operandos.
Calcular cada operação usando funções separadas que recebem a struct por referência.
Exibir os resultados na tela.
Tratar o caso de divisão por zero.
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct Operacao {
    float operando1;
    float operando2;
    float resultado;
};

// Função para somar
void soma(Operacao &op) {
    op.resultado = op.operando1 + op.operando2;
}

// Função para subtrair
void subtracao(Operacao &op) {
    op.resultado = op.operando1 - op.operando2;
}

// Função para multiplicar
void multiplicacao(Operacao &op) {
    op.resultado = op.operando1 * op.operando2;
}

// Função para dividir
void divisao(Operacao &op) {
    if (op.operando2 != 0) {
        op.resultado = op.operando1 / op.operando2;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
        op.resultado = 0;
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    Operacao op;

    cout << "Digite o primeiro operando: ";
    cin >> op.operando1;
    cout << "Digite o segundo operando: ";
    cin >> op.operando2;

    // Realiza operações e exibe resultados
    soma(op);
    cout << "Soma: " << op.resultado << endl;

    subtracao(op);
    cout << "Subtração: " << op.resultado << endl;

    multiplicacao(op);
    cout << "Multiplicação: " << op.resultado << endl;

    divisao(op);
    cout << "Divisão: " << op.resultado << endl;

    return 0;
}