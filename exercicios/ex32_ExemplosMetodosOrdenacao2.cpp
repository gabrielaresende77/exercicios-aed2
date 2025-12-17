/* Exemplos de métodos de ordenação - Versão Melhorada */

#include <iostream>
#include <algorithm> // Necessário para usar a função swap()
using namespace std;

// Função auxiliar para imprimir
void imprimirVetor(int v[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

void selectionSort(int v[], int n)
{
    int menor;

    for (int i = 0; i < n - 1; i++) {
        menor = i;

        // localiza a posição do menor elemento
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        // Só troca se o menor não for o próprio elemento atual
        if (menor != i) {
            swap(v[i], v[menor]); // Troca direta
        }
    }
}

void bubbleSort(int v[], int n)
{
    bool trocou; // Flag de otimização

    for (int i = 0; i < n - 1; i++) {
        trocou = false; // Reinicia a flag a cada rodada

        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]); // Troca direta
                trocou = true; // Marca que houve troca
            }
        }

        // Se não trocou nada nesta rodada, já está ordenado
        if (!trocou) break; 
    }
}

int particiona(int v[], int inicio, int fim)
{
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] < pivo) {
            i++;
            swap(v[i], v[j]); // Troca direta
        }
    }

    swap(v[i + 1], v[fim]); // Troca o pivô para a posição correta
    return i + 1;
}

void quickSort(int v[], int inicio, int fim)
{
    if (inicio < fim) {
        int pi = particiona(v, inicio, fim);
        quickSort(v, inicio, pi - 1);
        quickSort(v, pi + 1, fim);
    }
}

int main()
{
    // Vetor de teste
    int valores[] = {0, -6, 34, 9, 17, 56, 2};
    
    // Calcula o tamanho automaticamente
    int n = sizeof(valores) / sizeof(valores[0]);

    cout << "Vetor Original: ";
    imprimirVetor(valores, n);

    // --- Escolha o método ---
    
    // selectionSort(valores, n);
    // bubbleSort(valores, n);
    quickSort(valores, 0, n - 1); // QuickSort usa índices (inicio, fim)

    cout << "Vetor Ordenado: ";
    imprimirVetor(valores, n);

    return 0;
}