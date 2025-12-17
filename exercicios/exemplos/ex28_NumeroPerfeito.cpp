#include <iostream>
using namespace std;

// Função que verifica se um número é perfeito
bool numeroPerfeito(int n) {
    if (n <= 0) return false; // Números perfeitos são positivos

    int somaDivisores = 0; // Inicializa a soma dos divisores

    // Loop para encontrar e somar os divisores de n (exceto ele mesmo)
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) { // Verifica se i é divisor de n
            somaDivisores += i; // Adiciona o divisor à soma
        }
    }

    // Se a soma dos divisores for igual ao número, é perfeito
    return somaDivisores == n;
}

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (numeroPerfeito(numero)) {
        cout << numero << " e um numero perfeito." << endl;
    } else {
        cout << numero << " nao e um numero perfeito." << endl;
    }

    return 0;
}