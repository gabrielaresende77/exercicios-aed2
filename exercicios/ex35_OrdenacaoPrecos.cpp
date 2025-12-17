/*
Crie um programa que armazene os preços de até 50 produtos.

O programa deve:

1. Permitir que o usuário digite os preços.
2. Ordenar os preços em ordem crescente, utilizando qualquer algoritmo de
ordenação de sua preferência.
3. Mostrar os preços antes e depois da ordenação.
*/

#include <iostream>
#include <iomanip> // Biblioteca nova: Para formatar casas decimais (preço)
#include <algorithm> // Para usar swap()

using namespace std;

// Função de Ordenação (Bubble Sort Crescente)
void ordenarPrecos(double vet[], int n) {
    bool trocou;
    for (int i = 0; i < n - 1; i++) {
        trocou = false;
        for (int j = 0; j < n - 1 - i; j++) {
            
            // CRESCENTE: Se o atual for MAIOR que o próximo, troca.
            // Assim, os preços altos vão para o final do vetor.
            if (vet[j] > vet[j + 1]) {
                swap(vet[j], vet[j + 1]);
                trocou = true;
            }
        }
        if (!trocou) break; // Otimização: para se já estiver ordenado
    }
}

// Função auxiliar para imprimir o vetor bonito
void imprimirLista(double vet[], int n) {
    // Configura a saída para exibir sempre 2 casas decimais
    cout << fixed << setprecision(2); 
    
    for (int i = 0; i < n; i++) {
        cout << "R$ " << vet[i] << " | ";
    }
    cout << endl;
}

int main() {
    double precos[50]; // Vetor de números reais (double)
    int qtd;

    cout << "Quantos produtos deseja cadastrar? (Max 50): ";
    cin >> qtd;

    // Validação de limite
    if (qtd > 50) qtd = 50;
    if (qtd < 1) return 0;

    // Entrada de dados
    for (int i = 0; i < qtd; i++) {
        cout << "Preco do produto " << (i + 1) << ": R$ ";
        cin >> precos[i];
    }

    cout << "\n=== PRECOS ORIGINAIS ===\n";
    imprimirLista(precos, qtd);

    // Chama a ordenação
    ordenarPrecos(precos, qtd);

    cout << "\n=== PRECOS ORDENADOS (Crescente) ===\n";
    imprimirLista(precos, qtd);

    return 0;
}