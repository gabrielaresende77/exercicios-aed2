#include <iostream>
using namespace std;

// Função que calcula o maior divisor comum (MDC) entre dois números usando o Algoritmo de Euclides
int calcularMDC(int a, int b) {
    while (b != 0) {   // Enquanto "b" não for zero, continuamos o cálculo
        int temp = b;  // Guardamos o valor de "b" em uma variável temporária
        b = a % b;     // Atualizamos "b" para o resto da divisão de "a" por "b"
        a = temp;      // Atualizamos "a" para o valor antigo de "b"
    }
    return a; // Quando "b" for zero, "a" é o MDC
}

int main() {
    int num1, num2;

    cout << "Digite dois números para calcular o MDC: ";
    cin >> num1 >> num2;

    if (num1 == 0 && num2 == 0) {
        cout << "MDC não está definido para ambos os números sendo zero." << endl;
    } else {
        // Calculamos o MDC e mostramos o resultado
        int mdc = calcularMDC(abs(num1), abs(num2)); // Calcula usando valores positivos
        cout << "O MDC de " << num1 << " e " << num2 << " é " << mdc << "." << endl;
    }

    return 0;
}
