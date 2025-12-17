#include <iostream>
using namespace std;

// Função que calcula o fatorial de um número
long long fatorial(int n) {
    // Verifica se o número é 0 ou 1; nesse caso, o fatorial é 1
    if (n <= 1)
        return 1; // Retorna 1, pois o fatorial de 0 ou 1 é 1
    else
        // Chama a função novamente (recursão) multiplicando o número por "fatorial(n - 1)"
        return n * fatorial(n - 1); // Ex: fatorial(5) = 5 * fatorial(4)
}

int main() {
    int numero;

    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;

    // Verifica se o número é negativo, pois fatorial não é definido para negativos
    if (numero < 0) {
        cout << "Fatorial não é definido para números negativos." << endl;
    } else {
        // Calcula o fatorial chamando a função "fatorial" e mostra o resultado
        cout << "Fatorial de " << numero << " é " << fatorial(numero) << endl;
    }

    return 0;
}
