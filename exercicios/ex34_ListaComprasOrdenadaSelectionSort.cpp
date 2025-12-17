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

// Função Selection Sort adaptada para Strings
void selectionSortStrings(string itens[], int n) {
    int menor; // Índice do "menor" nome (o que vem antes no alfabeto)
    
    // Loop externo: define a posição que vamos preencher agora (0, 1, 2...)
    for (int i = 0; i < n - 1; i++) {
        menor = i; // Assume inicialmente que o primeiro é o menor

        // Loop interno: varre o resto da lista procurando alguém menor
        for (int j = i + 1; j < n; j++) {
            
            // Comparação Alfabética:
            // Se itens[j] (ex: "Abacate") for menor que itens[menor] (ex: "Banana"),
            // atualizamos o índice do menor.
            if (itens[j] < itens[menor]) {
                menor = j;
            }
        }

        // Se encontrou alguém menor do que o que estava na posição 'i', troca.
        // Isso economiza trocas em comparação ao Bubble Sort.
        if (menor != i) {
            swap(itens[i], itens[menor]);
        }
    }
}

int main() {
    string lista[30]; 
    int qtd;

    cout << "Quantos itens deseja cadastrar na lista? (Max 30): ";
    cin >> qtd;
    
    if (qtd > 30) qtd = 30; // Trava de segurança
    
    cin.ignore(); // Limpa o buffer

    // Entrada
    for (int i = 0; i < qtd; i++) {
        cout << "Item " << (i + 1) << ": ";
        getline(cin, lista[i]);
    }

    // Chamada da ordenação (Selection Sort)
    selectionSortStrings(lista, qtd);

    // Saída
    cout << "\n=== LISTA DE COMPRAS (A-Z) ===\n";
    for (int i = 0; i < qtd; i++) {
        cout << "- " << lista[i] << endl;
    }

    return 0;
}