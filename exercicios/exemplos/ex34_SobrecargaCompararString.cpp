/*
Crie uma função chamada comparar que seja sobrecarregada para comparar dois
inteiros, dois números de ponto flutuante e duas strings. A função deve retornar
o maior dos dois valores.
*/

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int comparar(int a, int b) {
	return (a > b) ? a : b; // operador ternário
}

float comparar(float a, float b) {
	return (a > b) ? a : b;
}

string comparar(string a, string b) {
	return (a.length() > b.length()) ? a : b;
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2 ;
	float f1, f2;
	string s1, s2;
	
	cout<< "Informe 2 números inteiros: ";
	cin>> n1 >> n2;
	cout << "Maior (int) = " << comparar(n1, n2) << endl;
	
	cout<< "Informe 2 números float: ";
	cin >> f1 >> f2;	
	cout << "Maior (float) = " << comparar(f1, f2) << endl;
	
	cout<< "Informe 2 palavras: ";
	cin>> s1 >> s2;	
	cout << "Maior (string) = " << comparar(s1, s2) << endl;
	return 0;
}