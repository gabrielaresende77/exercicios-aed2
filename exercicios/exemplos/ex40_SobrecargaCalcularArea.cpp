/*
Crie uma função chamada calcularArea que seja sobrecarregada para calcular a
área de um quadrado (lado), um retângulo (comprimento e largura) e um círculo
(raio).
*/

#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

// Área do quadrado
double calcularArea(int lado) {
	return lado * lado;
}

// Área do retângulo
double calcularArea(int comprimento, int largura) {
	return comprimento * largura;
}

// Área do círculo
double calcularArea(double raio) {
	return M_PI * raio * raio;
}

int main () {
	setlocale(LC_ALL, "portuguese");
	
	int lado = 4;
	int comprimento = 5, largura = 3;
	double raio = 2.5;
	
	cout << "Área do quadrado = " << calcularArea(lado) << endl;
	cout << "Área do retângulo = " << calcularArea(comprimento, largura) << endl;
    cout << "Área do círculo = " << calcularArea(raio) << endl;
    
	return 0;
}