#include <iostream>
#include <locale.h>
using namespace std;

// Função que retorna o maior de três números
int maiorDeTres(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int a, b, c;
    cout << "Digite três números: ";
    cin >> a >> b >> c;

    int maior = maiorDeTres(a, b, c);
    cout << "O maior número é: " << maior << endl;

    return 0;
}