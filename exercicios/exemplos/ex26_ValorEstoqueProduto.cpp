/*
Crie um programa em C++ que cadastre os dados de um produto, contendo:

Nome do produto
Quantidade em estoque
Preços para 3 tipos de embalagem, sendo 2 preços para cada tipo

O programa deve calcular o valor total do estoque, usando a média de todos os
preços multiplicada pela quantidade, e exibir o resultado.
*/

#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;
    int quantidade;
    float precos[3][2]; // 3 tipos de embalagem x 2 preços cada
};

// Função para calcular o valor total do estoque
float calcularValorEstoque(Produto produto) {
    float soma = 0;
    int totalPrecos = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            soma += produto.precos[i][j];
            totalPrecos++;
        }
    }

    float mediaPreco = soma / totalPrecos;
    return mediaPreco * produto.quantidade;
}

int main() {
    Produto produto;

    cout << "Digite o nome do produto: ";
    getline(cin, produto.nome);

    cout << "Digite a quantidade em estoque: ";
    cin >> produto.quantidade;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Digite o preco " << i+1 << " para embalagem " << j+1 << ": ";
            cin >> produto.precos[i][j];
        }
    }

    cout << "Valor total do estoque: " << calcularValorEstoque(produto) << endl;

    return 0;
}