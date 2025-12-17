/*
Crie uma calculadora com as funções:  
- soma,  
- subtração,  
- multiplicação,  
- divisão.  

Cada função deve receber dois números do tipo `double` e retornar o resultado.  
No caso da divisão, trate a situação em que o divisor seja zero.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Declaração das funções
double soma(double x, double y);
double subtracao(double x, double y);
double multiplicacao(double x, double y);
double divisao(double x, double y);

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double a,b;
	
	cout << "Informe o primeiro valor: ";
	cin >> a;
	cout << "Informe o segundo valor: ";
	cin >> b;
	
	cout << "Soma = " << soma(a,b) << endl;
	cout << "Subtração = " << subtracao(a,b) << endl;
	cout << "Multiplicação = " << multiplicacao(a,b) << endl;
	cout << "Divisão = " << divisao(a,b) << endl;
	
	return 0;
}

// Implementação das funções
double soma(double x, double y){
	return x + y;
}

double subtracao(double x, double y){
	return x - y;
}

double multiplicacao(double x, double y){
	return x * y;
}

double divisao(double x, double y){
	if(y != 0)
		return x/y;
    else
		cout << "Erro: divisão por zero!" << endl;
	    return 0;
}