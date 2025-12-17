/*
Crie um programa que utilize funções para implementar uma calculadora simples.  
O programa deve conter:  

1. Um menu de opções que permita:  
   - Leitura de valores;  
   - Leitura da operação;  
   - Exibição do resultado;  
   - Encerrar o programa.  
2. Uma função para leitura de dois valores inteiros.  
3. Uma função para leitura da operação matemática (+, -, *, /).  
4. Uma função que receba os dois valores e a operação, calculando e exibindo o resultado.  
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Exibe o menu principal e retorna a opção escolhida
int menu() {
    int aux;
    cout << "\n====== CALCULADORA ======\n";
    cout << "1 - Leitura de valores\n";
    cout << "2 - Leitura de operação\n";
    cout << "3 - Exibir resultado\n";
    cout << "0 - Sair\n";
    cout << "Escolha uma opção: ";
    cin >> aux;
    return aux;
}

// Lê dois valores inteiros
void leituraValores(int &val1, int &val2) {
    cout << "Informe o primeiro valor: ";
    cin >> val1;
    cout << "Informe o segundo valor: ";
    cin >> val2;
}

// Lê o operador matemático
char leituraOperador() {
    char op;
    cout << "\nEscolha a operação:\n";
    cout << "+ para soma\n";
    cout << "- para subtração\n";
    cout << "* para multiplicação\n";
    cout << "/ para divisão\n";
    cout << "Operador: ";
    cin >> op;
    return op;
}

// Calcula e mostra o resultado da operação
void resultado(int val1, int val2, char op) {
    switch(op) {
        case '+':
            cout << "Soma = " << val1 + val2 << endl;
            break;
        case '-':
            cout << "Diferença = " << val1 - val2 << endl;
            break;
        case '*':
            cout << "Produto = " << val1 * val2 << endl;
            break;
        case '/':
            if (val2 == 0)
                cout << "Erro: divisão por zero não permitida!" << endl;
            else
                cout << "Divisão = " << (val1 / val2) << endl;
            break;
        default:
            cout << "Operador inválido!" << endl;
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int num1 = 0, num2 = 0;
    char op = '+';
    int opcao;

    do {
        opcao = menu();

        switch(opcao) {
            case 1:
                leituraValores(num1, num2);
                break;
            case 2:
                op = leituraOperador();
                break;
            case 3:
                resultado(num1, num2, op);
                break;
            case 0:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while(opcao != 0);

    return 0;
}