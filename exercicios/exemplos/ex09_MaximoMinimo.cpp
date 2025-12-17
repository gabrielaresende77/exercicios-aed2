#include <iostream>
#include <locale.h>
using namespace std;

// Máximo de dois números
void maximoDoisNumeros() {
    int a, b;
    cout << "Digite dois números: ";
    cin >> a >> b;
    cout << "Máximo: " << (a > b ? a : b) << endl;
}

// Mínimo de dois números
void minimoDoisNumeros() {
    int a, b;
    cout << "Digite dois números: ";
    cin >> a >> b;
    cout << "Mínimo: " << (a < b ? a : b) << endl;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    cout << "Escolha a operação:\n1. Máximo\n2. Mínimo\n";
    cout << "Digite sua opção: ";
    cin >> opcao;

    if(opcao == 1) {
        maximoDoisNumeros();
    } else if(opcao == 2) {
        minimoDoisNumeros();
    } else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}