/*
Exercício 4 – Sistema de estoque com struct e funções

Crie uma struct Produto com os campos: código, nome, preço, quantidade.

Cadastre até 10 produtos.

Crie funções para:
Cadastrar produtos.
Exibir o estoque.
Calcular o valor total do estoque (preço × quantidade).
*/

#include <iostream>
#include <string>
using namespace std;

struct Produto {
    int codigo;
    string nome;
    float preco;
    int quantidade;
};

// Função para cadastrar produtos
void cadastrarProdutos(Produto produtos[], int &qtd) {
    cout << "Quantos produtos deseja cadastrar? (até 10): ";
    cin >> qtd;

    if (qtd > 10) qtd = 10;

    cin.ignore(); // limpar buffer

    for (int i = 0; i < qtd; i++) {
        cout << "\n=== Produto " << i + 1 << " ===\n";

        cout << "Codigo: ";
        cin >> produtos[i].codigo;

        cin.ignore(); // limpar \n antes de getline
        cout << "Nome: ";
        getline(cin, produtos[i].nome);

        cout << "Preco: ";
        cin >> produtos[i].preco;

        cout << "Quantidade: ";
        cin >> produtos[i].quantidade;
    }
}

// Função para exibir o estoque
void exibirEstoque(Produto produtos[], int qtd) {
    cout << "\n===== ESTOQUE ATUAL =====\n";

    for (int i = 0; i < qtd; i++) {
        cout << "\nProduto " << i + 1 << ":\n";
        cout << "Codigo: " << produtos[i].codigo << endl;
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preco: " << produtos[i].preco << endl;
        cout << "Quantidade: " << produtos[i].quantidade << endl;
    }
}

// Função para calcular o valor total do estoque
float calcularValorTotal(Produto produtos[], int qtd) {
    float total = 0;

    for (int i = 0; i < qtd; i++) {
        total += produtos[i].preco * produtos[i].quantidade;
    }

    return total;
}

int main() {
    Produto produtos[10];
    int qtd;

    cadastrarProdutos(produtos, qtd);

    exibirEstoque(produtos, qtd);

    float total = calcularValorTotal(produtos, qtd);

    cout << "\nValor TOTAL do estoque: R$ " << total << endl;

    return 0;
}