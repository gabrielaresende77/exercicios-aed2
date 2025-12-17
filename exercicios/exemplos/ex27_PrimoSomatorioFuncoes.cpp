/*
1. Crie uma função que receba um número inteiro e retorne true se o número for
primo, ou false caso contrário.

2. Crie uma função que receba um número inteiro positivo e retorne a soma de
todos os números de 1 até o número fornecido (somatório).
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Verifica se um número é primo
bool ehPrimo(int num) {
	if(num < 2) return false; // 0 e 1 não são primos
	for (int n = 2; n < num; n++){
		if(num % n == 0) return false;
	}
	return true;
}

// Retorna o somatório de 1 até n
int somatorio(int n) {
  int soma = 0;
  for (int i = 1; i <= n; i++) {
     soma += i;
  }
   return soma;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int val;
	
	cout << "Digite um valor inteiro: ";
	cin >> val;
	
	if(ehPrimo(val))
		cout << "Valor é primo" << endl;
	else
	   cout << "Valor não é primo" << endl;

    cout << "Somatório de 1 até " << val << " = " << somatorio(val) << endl;
    
	return 0;
}