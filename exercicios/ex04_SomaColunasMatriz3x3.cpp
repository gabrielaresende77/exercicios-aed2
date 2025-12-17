/*
Crie um programa que leia uma matriz 3x3 de números inteiros.
Em seguida, gere um array (vetor) unidimensional contendo a soma dos números de
cada coluna da matriz e exiba esse array (vetor).

Exemplo: Para a matriz:
3 6 -1
0 5 8
-7 10 3

O vetor resultante será:
-4  21  10
onde cada posição corresponde à soma da respectiva coluna da matriz.
*/

#include <iostream>
using namespace std;

int main()
{
	int mat[3][3];
	int vet[3]; // vetor para armazenar soma das colunas
	
	// Leitura da matriz
	for(int lin=0; lin<3; lin++){
		for(int col=0; col<3; col++){
			cout << "mat[" << lin << "][" << col << "]: ";
			cin >> mat[lin][col];
		}
	}
	
	// Cálculo da soma das colunas
	for(int col=0; col<3; col++){
		int soma = 0; // inicializa a soma da coluna
		for(int lin=0; lin<3; lin++){
			soma += mat[lin][col];
		}
		vet[col] = soma;
	}
	
	// Exibição do vetor resultante
	cout << "\nVetor com a soma de cada coluna:\n";
    for (int i = 0; i < 3; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
	
	return 0;
}