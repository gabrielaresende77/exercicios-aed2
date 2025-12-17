/*
2. Implemente uma função recursiva que, dados dois números inteiros x e n,
calcula o valor de x^n.
*/

#include <iostream>
using namespace std;

int potencia(int x, int n) {
	
	// Caso base: qualquer número elevado a 0 é igual a 1
    if (n == 0) return 1;
    	
    // A função chama a si mesma diminuindo n até chegar no caso base
    return x * potencia(x, n - 1);
}

int main() {
    int x, n;
    cout << "Digite x e n: ";
    cin >> x >> n;

    cout << "Resultado: " << potencia(x, n);
    return 0;
}