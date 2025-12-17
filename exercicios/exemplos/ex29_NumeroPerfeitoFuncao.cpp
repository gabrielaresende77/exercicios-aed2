/*         
Crie uma função que verifique se um número é perfeito.  

Um número é considerado perfeito quando é igual à soma de seus divisores
próprios (exceto ele mesmo). 
Exemplo: 6 é perfeito, pois seus divisores próprios são 1, 2 e 3, e 1 + 2 + 3 = 6.

A função deve receber um número inteiro positivo e retornar true se for perfeito
ou false caso contrário.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Função que verifica se um número é perfeito
bool ehPerfeito(int n) {
    int soma = 0;

    // Soma todos os divisores próprios (menores que n)
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            soma += i;
    }

    // Retorna true se a soma dos divisores for igual ao número
    return (soma == n);
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int valor;

    cout << "Digite um número inteiro positivo: ";
    cin >> valor;

    if(ehPerfeito(valor))
        cout << valor << " é um número perfeito!" << endl;
    else
        cout << valor << " não é um número perfeito." << endl;

    return 0;
}