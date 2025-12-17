#include <iostream>
using namespace std;

// Função para contar o número de dígitos de um número inteiro
int contarDigitos(int n) {
    int contador = 0; // Inicializa o contador de dígitos

    if (n == 0) { // Caso o número seja 0, ele tem 1 dígito
        return 1;
    }

    // Enquanto o número for maior que 0, divide-o por 10 e conta os dígitos
    while (n != 0) {
        n /= 10; // Remove o último dígito do número
        contador++; // Aumenta o contador a cada dígito removido
    }

    return contador; // Retorna o total de dígitos
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    cout << "O número de dígitos de " << numero << " é " << contarDigitos(numero) << endl;
    return 0;
}