/*
Crie uma função bool ePalindromo(string texto) que retorne true se a palavra
for um palíndromo (pode ser lida igual de trás para frente).
Na função main, peça ao usuário para digitar uma palavra e exiba o resultado da
verificação.
Exemplos de palíndromos: "arara", "radar", "reviver".
*/

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

// Função que verifica se uma palavra é palíndromo
bool ePalindromo(string texto) {
    int tamanho = texto.length(); // Obtém o tamanho da palavra
    for (int i = 0; i < tamanho / 2; i++) { // Percorre metade da palavra
        if (texto[i] != texto[tamanho - i - 1]) // Compara letra da frente com letra do fim
            return false; // Se forem diferentes, não é palíndromo
    }
    return true; // Se todas as comparações forem iguais, é palíndromo
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (ePalindromo(palavra)) {
        cout << palavra << " é um palíndromo." << endl;
    } else {
        cout << palavra << " não é um palíndromo." << endl;
    }

    return 0;
}
