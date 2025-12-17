/*
Crie um programa que calcule a soma dos elementos de uma matriz 3x3 usando função recursiva.
O programa deve:

Solicitar ao usuário os 9 elementos da matriz.
Calcular a soma de todos os elementos usando recursão.
Exibir o resultado da soma.
*/

#include <iostream>
using namespace std;

// Função recursiva para somar elementos da matriz 3x3
int somaMatriz(int matriz[3][3], int i, int j) {
    if (i >= 3) return 0; // Condição de parada (fim da matriz)
    if (j >= 3) return somaMatriz(matriz, i + 1, 0); // Passa para a próxima linha

    return matriz[i][j] + somaMatriz(matriz, i, j + 1);
}

int main() {
    int matriz[3][3];
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    int soma = somaMatriz(matriz, 0, 0);
    cout << "Soma dos elementos da matriz: " << soma << endl;

    return 0;
}