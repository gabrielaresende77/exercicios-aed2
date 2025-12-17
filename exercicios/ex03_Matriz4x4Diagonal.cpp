/*
Declare uma matriz 4x4. Preencha com o valor 1 a diagonal principal e com o
valor 2 os demais elementos. Ao final, exiba a matriz obtida e a soma de todos
os valores.
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/

#include <iostream>
using namespace std;

int main()
{
	int mat[4][4];
	int soma=0;
	
	// Preencher a matriz
	for(int lin=0; lin<4; lin++){
		for(int col=0; col<4; col++){
			if(lin == col){
				mat[lin][col] = 1; // diagonal principal
			} else {
				mat[lin][col] = 2; // demais elementos
			}
			soma += mat[lin][col]; // acumula a soma
		}
	}
	
	// Exibir a matriz
	cout << "Matriz 4x4:\n";
	for(int lin=0; lin<4; lin++){
		for(int col=0; col<4; col++){
			cout << mat[lin][col] << " ";
		}
		cout << endl;
	}
	
	// Exibir a soma
	cout << "\nSoma de todos os elementos: " << soma << endl;

	return 0;
}