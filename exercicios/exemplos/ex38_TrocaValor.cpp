#include <iostream>
using namespace std;

// Função para trocar os valores de duas variáveis
void trocarValores(int &a, int &b) {
    int temp = a; // Guarda o valor de "a" em uma variável temporária
    a = b;        // Atribui o valor de "b" a "a"
    b = temp;     // Atribui o valor original de "a" a "b"
}

int main() {
    int x, y;

    // Solicita ao usuário dois números
    cout << "Digite dois números (x y): ";
    cin >> x >> y;

    // Exibe os valores antes da troca
    cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    // Chama a função para trocar os valores
    trocarValores(x, y);

    // Exibe os valores após a troca
    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

    return 0;
}