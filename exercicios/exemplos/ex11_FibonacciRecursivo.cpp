/*
Crie um programa em C++ que calcule o n-ésimo número da sequência de Fibonacci usando função recursiva.
O programa deve:

Solicitar ao usuário um número n.
Calcular o n-ésimo número da sequência de Fibonacci.
Exibir o resultado na tela.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Função recursiva que retorna o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n;
    cout << "Digite um número para calcular o n-ésimo número de Fibonacci: ";
    cin >> n;

    int resultado = fibonacci(n);
    cout << "O " << n << "º número de Fibonacci é: " << resultado << endl;

    return 0;
}