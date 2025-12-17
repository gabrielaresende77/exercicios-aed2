/*
Programa para demonstrar a diferença entre passagem por valor e passagem por
referência.
 
A função trocaV(int a, int b) recebe os parâmetros por valor, ou seja, ela faz
uma cópia dos valores. Assim, as alterações feitas dentro da função NÃO afetam
as variáveis originais.

Já a função trocaR(int &a, int &b) recebe os parâmetros por referência, o que
permite alterar diretamente os valores das variáveis originais.
*/


#include <iostream>
#include <locale.h>
using namespace std;

// Função que tenta trocar os valores usando passagem por valor(não afeta as variáveis originais)
void trocaV(int a, int b){
	int aux = a;
	a = b;
	b = aux;
}

// Função que troca os valores usando passagem por referência
void trocaR(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a = 10, b = 20;
	
	cout << "a = " << a << ", b = " << b << " (sem alteração)\n";
	
	trocaV(a,b);
	cout << "a = " << a << ", b = " << b << " (passagem por valor)\n";

	trocaR(a,b);
	cout << "a = " << a << ", b = " << b << " (passagem por referência)\n";
	
	return 0;
}