/*
Exercício 1 – Cadastro simples com struct

Crie um programa em C++ que:
-Cadastre até 5 produtos de uma loja.
-Cada produto deve conter: nome, código e preço.
-Após o cadastro, liste todos os produtos na tela.

*Utilize struct e vetor.
*/

#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;
    int codigo;
    float preco;
};

int main() {
    Produto produtos[5];

    cout << "=== Cadastro de Produtos ===\n";

    // Cadastro
    for (int i = 0; i < 5; i++) {
        cout << "\nProduto " << i + 1 << ":\n";

        cout << "Nome: ";
        getline(cin, produtos[i].nome);

        cout << "Codigo: ";
        cin >> produtos[i].codigo;

        cout << "Preco: ";
        cin >> produtos[i].preco;

        cin.ignore(); // limpar buffer antes do próximo getline
    }

    // Exibição
    cout << "\n=== Produtos Cadastrados ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nProduto " << i + 1 << ":\n";
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Codigo: " << produtos[i].codigo << endl;
        cout << "Preco: R$ " << produtos[i].preco << endl;
    }

    return 0;
}