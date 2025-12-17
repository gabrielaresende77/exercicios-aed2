/*
Exercício 2 – Sistema Bancário

Crie uma struct Conta com:

numeroConta
nomeCliente
saldo

Leia os dados de 5 contas.

Crie uma função que:
Receba o número da conta e um valor a ser sacado.
Atualize o saldo apenas se houver saldo suficiente.

Exiba todas as contas com saldo atualizado.
*/

#include <iostream>
#include <string>
using namespace std;

struct Conta {
    int numeroConta;
    string nomeCliente;
    float saldo;
};

// Função para realizar saque
void sacar(Conta contas[], int tamanho, int numero, float valor) {
    // Procurar conta pelo número
    for (int i = 0; i < tamanho; i++) {
        if (contas[i].numeroConta == numero) {

            // Verificar saldo suficiente
            if (contas[i].saldo >= valor) {
                contas[i].saldo -= valor;
                cout << "\nSaque realizado com sucesso!\n";
            } else {
                cout << "\nSaldo insuficiente! Saque não realizado.\n";
            }
            return; 
        }
    }

    cout << "\nConta não encontrada!\n";
}

// Exibir todas as contas
void exibirContas(Conta contas[], int tamanho) {
    cout << "\n=== CONTAS ATUALIZADAS ===\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Conta: " << contas[i].numeroConta << endl;
        cout << "Cliente: " << contas[i].nomeCliente << endl;
        cout << "Saldo: " << contas[i].saldo << "\n\n";
    }
}

int main() {
    Conta contas[5];

    // Leitura das contas
    for (int i = 0; i < 5; i++) {
        cout << "Digite o numero da conta " << i + 1 << ": ";
        cin >> contas[i].numeroConta;

        cout << "Nome do cliente: ";
        cin >> contas[i].nomeCliente;

        cout << "Saldo inicial: ";
        cin >> contas[i].saldo;

        cout << endl;
    }

    int numeroBusca;
    float valorSaque;

    cout << "\nInforme o numero da conta para saque: ";
    cin >> numeroBusca;

    cout << "Valor do saque: ";
    cin >> valorSaque;

    // Realizar saque
    sacar(contas, 5, numeroBusca, valorSaque);

    // Exibir contas atualizadas
    exibirContas(contas, 5);

    return 0;
}