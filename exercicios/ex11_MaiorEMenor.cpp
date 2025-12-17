/*
Crie um programa que:
-Receba três números inteiros do usuário.
-Utilize uma função para retornar o maior dos três números.
-Utilize outra função para retornar o menor dos três números.
-Exiba o maior e o menor número na tela.
*/

#include <iostream>
using namespace std;

int maior(int a, int b, int c) {
    int maximo = a;
    if (b > maximo){
		maximo = b;
	}
    if (c > maximo){
		maximo = c;
	}
    return maximo;
}

int menor(int a, int b, int c) {
    int minimo = a;
    if (b < minimo){
		minimo = b;
	}
    if (c < minimo){
		minimo = c;
	}
    return minimo;
}

int main() {
    int v1, v2, v3;
    cout << "Informe 3 valores inteiros: ";
    cin >> v1 >> v2 >> v3;

    cout << "O maior valor = " << maior(v1, v2, v3) << "\n";
    cout << "O menor valor = " << menor(v1, v2, v3) << "\n";

    return 0;
}