/*
Crie um programa que leia uma matriz 4x4 e gere a sua matriz transposta.  
A matriz transposta é obtida trocando linhas por colunas.  
Exiba a matriz transposta na tela.
*/

#include <iostream>
using namespace std;

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0},
        {11, 12, 13, 0}
    };

    int transposta[4][4];

    // Calcula a transposta
    for (int lin = 0; lin < 4; lin++) {
        for (int col = 0; col < 4; col++) {
            transposta[col][lin] = matriz[lin][col];
        }
    }

    // Exibe a matriz transposta
    cout << "Matriz transposta:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}