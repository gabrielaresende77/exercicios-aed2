/*
Crie um programa que multiplique duas matrizes A (3x2) e B (2x3) e gere a
matriz C resultante (3x3).  
Exiba a matriz C na tela.
*/

#include <iostream>
using namespace std;

int main() {
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int B[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    // Matriz C (3x3) para armazenar o resultado
    int C[3][3] = {0};

    // Multiplicação das matrizes
    for(int i = 0; i < 3; i++) {       // linha de A
        for(int k = 0; k < 2; k++) {   // coluna de A / linha de B
            for(int j = 0; j < 3; j++) { // coluna de B
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Exibição da matriz resultante
    cout << "Matriz C (3x3):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}