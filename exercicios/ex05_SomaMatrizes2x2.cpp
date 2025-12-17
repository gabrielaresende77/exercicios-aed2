/* Crie um programa que leia 2 matrizes(2x2) de valores inteiros e gere uma 
terceira matriz criada pela soma das 2 anteriores. */

#include <iostream>
using namespace std;

int main()
{
	int A[2][2], B[2][2], C[2][2];
	
	// Leitura da matriz A
	cout << "Digite os valores da matriz A (2x2):\n";
	for(int lin=0; lin<2; lin++){
    	for(int col=0; col<2; col++){
        	cout << "A[" << lin << "][" << col << "]: ";
        	cin >> A[lin][col];
    	}
	}
	
	// Leitura da matriz B
	cout << "\nDigite os valores da matriz B (2x2):\n";
	for(int lin=0; lin<2; lin++){
    	for(int col=0; col<2; col++){
        	cout << "B[" << lin << "][" << col << "]: ";
        	cin >> B[lin][col];
    	}
	}

	// Cálculo da matriz C
	for(int lin=0; lin<2; lin++){
    	for(int col=0; col<2; col++){
        	C[lin][col] = A[lin][col] + B[lin][col];
    	}
	}

	// Exibição da matriz C
	cout << "\nMatriz C (soma de A e B):\n";
	for(int lin=0; lin<2; lin++){
		for(int col=0; col<2; col++){
			cout << C[lin][col] << " ";
		}
		cout << endl; // quebra de linha após cada linha da matriz
	}
	return 0;
}