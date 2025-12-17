/*
Crie uma função `int fatorial(int n)` que calcule e retorne o fatorial de um
número inteiro positivo.

Na função `main`, leia um número inteiro positivo informado pelo usuário e exiba
o fatorial correspondente no seguinte formato:

Exemplo:
Entrada: 5
Saída: Fatorial de 5 = 120
*/

#include <iostream>
#include <locale.h>
using namespace std;

int fatorial (int n){
	int fat = 1;
	for (int i =n ; i > 1; i--){
		fat *= i;
	}
	return fat;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	cout << "Digite um número inteiro positivo: ";
	cin >> x;
	
	if(x < 0){
		cout << "Número inválido. Digite um valor inteiro positivo." << endl;
	}else{
		cout << "Fatorial de " << x << " = " << fatorial(x) << endl;
	}
	
	return 0;
}