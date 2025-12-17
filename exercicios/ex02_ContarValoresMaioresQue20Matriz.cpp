/* Leia uma matriz 3x3, conte e exiba a quantidade de valores maiores que 20. */

#include <iostream>
using namespace std;

int main()
{
	int mat [3][3];
	int cont=0;
	
	//Leitura da matriz
	for(int lin=0; lin<3; lin++){
		for(int col=0; col<3; col++){
			cout << "Mat[" << lin << "][" << col << "]: ";
			cin >> mat[lin][col];
			// Contar valores maiores que 20
			if(mat[lin][col] > 20){
				cont++;
			}
		}
	}
	
	// Exibir resultado
	cout << "\nQuantidade de valores maiores que 20: " << cont << endl;
	return 0;
}