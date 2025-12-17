/*
Crie um programa em C++ que permita ao usuário:

1. Informar o número de itens a serem cadastrados (máximo de 30).
2. Digitar os nomes dos itens da lista de compras.
3. Exibir os itens em ordem alfabética (A–Z), utilizando Bubble Sort ou
Selection Sort.
*/

#include <iostream>
#include <string>
#include <algorithm> // Para usar a função swap()
using namespace std;

// Função Bubble Sort adaptada para Strings
void ordenarLista(string itens[], int n) {
    // A lógica é idêntica à ordenação de números.
    // Em C++, os operadores > e < funcionam para texto (ordem alfabética).
    // Ex: "Banana" > "Abacaxi" é VERDADEIRO.
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            
            // Se o item atual for "maior" (alfabeticamente depois) que o próximo, troca.
            if (itens[j] > itens[j + 1]) {
                swap(itens[j], itens[j + 1]);
            }
        }
    }
}

int main() {
    string lista[30]; // Vetor fixo para até 30 itens
    int qtd;

    cout << "Quantos itens deseja cadastrar na lista? (Max 30): ";
    cin >> qtd;
    
    // Validação de segurança
    if (qtd > 30) {
        qtd = 30;
        cout << "Quantidade ajustada para 30.\n";
    }
    
    cin.ignore(); // Limpa o buffer do 'enter' após o cin >> qtd

    // Entrada de dados
    for (int i = 0; i < qtd; i++) {
        cout << "Item " << (i + 1) << ": ";
        // getline é essencial aqui para permitir itens compostos (ex: "Arroz Integral")
        getline(cin, lista[i]);
    }

    // Chamada da ordenação
    ordenarLista(lista, qtd);

    // Exibição
    cout << "\n=== LISTA DE COMPRAS (A-Z) ===\n";
    for (int i = 0; i < qtd; i++) {
        cout << "- " << lista[i] << endl;
    }

    return 0;
}