/*
Exercício 6 – Soma da diagonal principal e secundária

Leia uma matriz 3x3 de inteiros.

Implemente:
Uma função para somar os valores da diagonal principal.
Uma função para somar os valores da diagonal secundária.

Mostre as duas somas separadamente ao final do programa.
*/

#include <iostream>
using namespace std;

// Soma da diagonal principal
int somaDiagonalPrincipal(int m[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += m[i][i];  // elementos (0,0), (1,1), (2,2)
    }
    return soma;
}

// Soma da diagonal secundária
int somaDiagonalSecundaria(int m[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += m[i][2 - i];  // elementos (0,2), (1,1), (2,0)
    }
    return soma;
}

int main() {
    int matriz[3][3];

    // Leitura da matriz
    cout << "Digite os 9 valores da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Chamando as funções
    int somaP = somaDiagonalPrincipal(matriz);
    int somaS = somaDiagonalSecundaria(matriz);

    // Resultados
    cout << "\nSoma da diagonal PRINCIPAL: " << somaP << endl;
    cout << "Soma da diagonal SECUNDARIA: " << somaS << endl;

    return 0;
}