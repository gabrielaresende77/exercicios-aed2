/*
Faça um programa que leia duas matrizes de valores inteiros 3x2 e 2x2 
e gere uma terceira que será o produto das duas lidas.
*/

#include <iostream>
using namespace std;

int main() {
    // Matrizes de exemplo
    int A[3][2] = {{0, 2}, {3, -2}, {4, 0}};
    int B[2][2] = {{2, 1}, {4, -2}};
    int C[3][2] = {0}; // resultado será 3x2

    // Multiplicação de matrizes
    // Para cada linha m de A
    for (int m = 0; m < 3; m++) {
    	// Para cada coluna p de B
        for (int p = 0; p < 2; p++) {
        	// Para percorrer as colunas de A e linhas de B
            for (int n = 0; n < 2; n++) {
                C[m][p] += A[m][n] * B[n][p];
            }
        }
    }

    // Exibição da matriz resultante
    cout << "Matriz C (resultado do produto A x B):\n";
    for (int m = 0; m < 3; m++) {
        for (int p = 0; p < 2; p++) {
            cout << C[m][p] << " ";
        }
        cout << endl;
    }

    return 0;
}