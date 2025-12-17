/*
Crie um programa em C++ que cadastre os dados de um produto, contendo:
Nome
Quantidade disponível
Preço

O programa deve ler os dados do usuário e exibir todas as informações do produto na tela.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Struct para armazenar informações de um produto
struct Produto {
    string nome;     // Nome do produto
    int quantidade;  // Quantidade disponível
    float preco;     // Preço do produto
};

int main() {
	setlocale(LC_ALL, "portuguese");
	
    Produto produto1; // Variável do tipo Produto

    // Entrada de dados
    cout << "Digite o nome do produto: ";
    cin >> produto1.nome;
    
    cout << "Digite a quantidade do produto: ";
    cin >> produto1.quantidade;
    
    cout << "Digite o preço do produto: ";
    cin >> produto1.preco;

    // Exibição dos dados
    cout << "\nProduto cadastrado:\n";
    cout << "Nome: " << produto1.nome << "\n";
    cout << "Quantidade: " << produto1.quantidade << "\n";
    cout << "Preço: R$ " << produto1.preco << "\n";

    return 0;
}