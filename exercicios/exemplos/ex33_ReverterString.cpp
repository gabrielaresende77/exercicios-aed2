#include <iostream>
#include <string>
using namespace std;

// Função para reverter uma string, ou seja, inverter a ordem das letras
string reverterString(const string &str) {
    string reverso = ""; // Inicializamos uma string vazia que armazenará o texto invertido

    // Loop que começa da última letra da string e vai até a primeira
    for (int i = str.length() - 1; i >= 0; i--) {
        reverso += str[i]; // Adiciona cada letra, de trás pra frente, na string "reverso"
    }

    return reverso; // Retorna a string invertida
}

int main() {
    string texto;

    cout << "Digite uma string para reverter: ";
    getline(cin, texto);

    string textoRevertido = reverterString(texto); // Chama a função para reverter a string
    cout << "String revertida: " << textoRevertido << endl; // Mostra o texto invertido na tela

    return 0;
}
