/*
Crie uma função que recebe um vetor de inteiros e um número inteiro.  
A função deve retornar a posição em que o número está no vetor.  
Se o número não for encontrado, a função deve retornar -1.
*/

#include <iostream>
using namespace std;

// Função recebe o vetor, o tamanho do vetor e o número a procurar
int procura(int vetor[], int tamanho, int num) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == num)
            return i;
    }
    return -1;
}

int main() {
	int vet[5] = {3,5,7,9,11};
	int val;
	
    cout << "Qual valor deseja localizar? ";
    cin >> val;
    
	int pos = procura(vet, 5, val); // passamos o tamanho do vetor
	
    if (pos >= 0)
        cout << "O valor esta na posicao " << pos << endl;
    else
        cout << "Valor nao se encontra no vetor!" << endl;
    
	return 0;
}