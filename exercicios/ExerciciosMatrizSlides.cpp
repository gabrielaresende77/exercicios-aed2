/*
Exercícios práticos - Matriz

1 - Crie uma matriz 4x4 e preencha-a com números fornecidos pelo usuário. Em
seguida, exiba apenas os elementos da diagonal principal.
	- Dica: A diagonal principal é composta pelos elementos onde o índice da
	linha é igual ao índice da coluna.

2 - Crie duas matrizes 2x2 e preencha-as com valores fornecidos pelo usuário.
Faça um programa que calcule e exiba a soma dessas duas matrizes.

3 - Criar um placar de jogo: armazenar os pontos de 2 times em 5 partidas
(matriz 2x5) e mostrar a pontuação total de cada time.

4 - Verificar se uma matriz 3x3 é simétrica, ou seja, mat[i][j] == mat[j][i]
*/

#include <iostream>
using namespace std;

int main() {

    // EXERCÍCIO 1

    int mat1[4][4];

    cout << "=== EXERCICIO 1: Diagonal de matriz 4x4 ===\n";
    cout << "Digite os 16 valores da matriz 4x4:\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Diagonal principal: ";
    for (int i = 0; i < 4; i++) {
        cout << mat1[i][i] << " ";
    }
    cout << "\n\n";

    // EXERCÍCIO 2

    int A[2][2], B[2][2], S[2][2];

    cout << "=== EXERCICIO 2: Soma de duas matrizes 2x2 ===\n";

    cout << "Digite os valores da matriz A (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Soma
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz Soma (A + B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    // EXERCÍCIO 3

    int pontos[2][5];
    int total[2] = {0, 0};

    cout << "=== EXERCICIO 3: Placar de 2 times em 5 partidas ===\n";

    for (int i = 0; i < 2; i++) {
        cout << "Digite os pontos do Time " << i+1 << " em 5 partidas:\n";
        for (int j = 0; j < 5; j++) {
            cin >> pontos[i][j];
            total[i] += pontos[i][j];
        }
    }

    cout << "\nPontuacao total:\n";
    cout << "Time 1: " << total[0] << endl;
    cout << "Time 2: " << total[1] << endl;
    cout << "\n";

    // EXERCÍCIO 4

    int mat3[3][3];
    bool simetrica = true;

    cout << "=== EXERCICIO 4: Verificar se matriz 3x3 é simétrica ===\n";
    cout << "Digite os 9 valores da matriz 3x3:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat3[i][j];
        }
    }

    // Verifica simetria
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat3[i][j] != mat3[j][i]) {
                simetrica = false;
            }
        }
    }

    if (simetrica)
        cout << "A matriz eh SIMETRICA.\n";
    else
        cout << "A matriz NAO eh simetrica.\n";

    return 0;
}