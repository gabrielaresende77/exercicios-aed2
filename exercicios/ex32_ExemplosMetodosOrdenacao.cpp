/* Exemplos de métodos de ordenação */

#include <iostream>
using namespace std;

void selectionSort(int v[], int n)
{
    int menor, temp;

    for (int i = 0; i < n - 1; i++) {
        menor = i;

        // localiza a posição do menor elemento
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        // faz a troca de valores
        int aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}

void bubbleSort(int v[], int n)
{
    // número de repetições
    for (int i = 0; i < n - 1; i++) {

        // faz comparações do elemento com o posterior
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {

                // abaixo faço a troca
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int particiona(int v[], int inicio, int fim)
{
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] < pivo) {
            i++;
            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }

    int temp = v[fim];
    v[fim] = v[i + 1];
    v[i + 1] = temp;

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
    int valores[] = {0, -6, 34, 9, 17, 56, 2};

    // ordenação
    // selectionSort(valores, 7);
    // bubbleSort(valores, 7);
    quickSort(valores, 0, 6);

    for (int i = 0; i < 7; i++)
        cout << valores[i] << " | ";

    return 0;
}