/*
Crie um programa que leia duas matrizes A e B (3x2) e gere uma terceira matriz C,  
que será a soma das duas primeiras.  
Em seguida, exiba a matriz resultante C.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
    int A[3][2], B[3][2], C[3][2];

    // Leitura da matriz A
    for(int lin = 0; lin < 3; lin++) {
        for(int col = 0; col < 2; col++) {
            cout << "A[" << lin << "][" << col << "] = ";
            cin >> A[lin][col];
        }
    }

    // Leitura da matriz B
    for(int lin = 0; lin < 3; lin++) {
        cout << "Valores da matriz B, linha " << lin << " (2 números): ";
        cin >> B[lin][0] >> B[lin][1];
    }

    // Soma das matrizes e exibição da matriz C
    cout << "Matriz C (A + B):" << endl;
    for(int lin = 0; lin < 3; lin++) {
        for(int col = 0; col < 2; col++) {
            C[lin][col] = A[lin][col] + B[lin][col];
            cout << C[lin][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}