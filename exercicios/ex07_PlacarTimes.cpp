/* 
Crie um programa que armazene, em uma matriz 2x5, os pontos de 2 times em 5 partidas.
Em seguida, calcule e mostre a pontuação total de cada time.
*/

#include <iostream>
using namespace std;

int main() {
    int matriz[2][5];
    int total[2] = {0, 0}; // inicializa com 0

    for (int lin = 0; lin < 2; lin++) {
        cout << "Informe a pontuacao do Time " << (lin + 1) << " em todas as 5 partidas:\n";
        for (int col = 0; col < 5; col++) {
            cin >> matriz[lin][col];
            total[lin] += matriz[lin][col]; // soma no total
        }
    }

    cout << "Pontuacao Time 1 = " << total[0] << "\n";
    cout << "Pontuacao Time 2 = " << total[1] << "\n";

    return 0;
}