/*
1. Faça uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de N até 0 em ordem decrescente.
*/

#include <iostream>
using namespace std;

void imprimirDecrescente(int n) {
    if (n < 0) return; // Caso base: quando n for menor que 0, a recursão para
    	
    cout << n << " "; // Imprime o número atual

	// A função chama a si mesma até atingir o caso base
    imprimirDecrescente(n - 1);
}

int main() {
    int n;
    cout << "Digite N: ";
    cin >> n;

    imprimirDecrescente(n);
    return 0;
}