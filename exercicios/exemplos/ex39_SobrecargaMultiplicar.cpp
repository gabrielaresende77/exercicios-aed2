/*
Crie uma função chamada multiplicar que seja sobrecarregada para multiplicar
dois inteiros, dois números de ponto flutuante (float) e dois números double.  
*/

#include <iostream>
#include <locale.h>
using namespace std;

int multiplicar(int a, int b) {
	return a * b;
}

float multiplicar(float a, float b) {
	return a * b;
}

double multiplicar(double a, double b) {
	return a * b;
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	float f1, f2;
	double d1, d2;
	
	cout << "Informe 2 números inteiros: ";
	cin >> n1 >> n2;
	cout << "Resultado (int) = " << multiplicar(n1, n2) << endl;
	
	cout << "Informe 2 números float: ";
	cin >> f1 >> f2;	
	cout << "Resultado (float) = " << multiplicar(f1, f2) << endl;
	
	cout << "Informe 2 números double: ";
	cin >> d1 >> d2;
	cout << "Resultado (double) = " << multiplicar(d1, d2) << endl;
	return 0;
}