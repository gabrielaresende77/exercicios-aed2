/*
Crie um programa que:

Solicite ao usuário duas strings.
Utilize uma função concatenaStrings para concatenar as duas strings.
Exiba o resultado da concatenação na tela.
*/

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

// Função que concatena duas strings
string concatenaStrings(string str1, string str2) {
    return str1 + str2; // Concatena as duas strings
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    string str1, str2;
    cout << "Digite a primeira string: ";
    cin >> str1;
    cout << "Digite a segunda string: ";
    cin >> str2;

    string resultado = concatenaStrings(str1, str2);
    cout << "Resultado da concatenação: " << resultado << endl;

    return 0;
}