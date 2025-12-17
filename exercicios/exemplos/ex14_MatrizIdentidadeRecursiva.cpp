/*
Crie um programa em C++ que preencha e exiba uma matriz identidade de tamanho
n x n usando função recursiva.

O programa deve:
Solicitar ao usuário o tamanho n da matriz.
Preencher a matriz com 1 na diagonal principal e 0 nas demais posições.
Exibir a matriz no formato de tabela.
*/

#include <iostream>
using namespace std;

// Função recursiva para preencher a matriz identidade
void preencheIdentidade(int matriz[][10], int i, int j, int n) {
    if (i >= n) return; // Condição de parada

    if (j < n) {
        matriz[i][j] = (i == j) ? 1 : 0;
        preencheIdentidade(matriz, i, j + 1, n);
    } else {
        preencheIdentidade(matriz, i + 1, 0, n);
    }
}

int main() {
    int n;
    cout << "Digite o tamanho da matriz identidade: ";
    cin >> n;

    int matriz[10][10];
    preencheIdentidade(matriz, 0, 0, n);

    cout << "Matriz Identidade de tamanho " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}