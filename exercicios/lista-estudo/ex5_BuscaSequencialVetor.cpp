/*
Exercício 5 – Função que busca um valor em vetor

Leia um vetor de 15 números inteiros.

Implemente uma função de busca sequencial que:
Receba o vetor e um número procurado.
Retorne o índice onde o número foi encontrado, ou -1 caso não exista.
*/

#include <iostream>
using namespace std;

// Função de busca sequencial
int buscaSequencial(int vet[], int tamanho, int procurado) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] == procurado) {
            return i; // retorna o índice onde encontrou
        }
    }
    return -1; // não encontrou
}

int main() {
    int vet[15];
    int numero;

    // Leitura do vetor
    cout << "Digite 15 numeros inteiros:\n";
    for (int i = 0; i < 15; i++) {
        cin >> vet[i];
    }

    // Número a buscar
    cout << "\nDigite o numero a ser procurado: ";
    cin >> numero;

    // Chama a função
    int resultado = buscaSequencial(vet, 15, numero);

    // Exibição do resultado
    if (resultado == -1) {
        cout << "\nNumero nao encontrado no vetor.\n";
    } else {
        cout << "\nNumero encontrado no indice: " << resultado << endl;
    }

    return 0;
}