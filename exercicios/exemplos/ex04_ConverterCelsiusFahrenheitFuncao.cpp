#include <iostream>
#include <locale.h>
using namespace std;

// Função para converter temperatura de Celsius para Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0; // Fórmula de conversão
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    float celsius;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    // Exibe o resultado da conversão
    cout << celsius << " °C equivale a "
         << celsiusParaFahrenheit(celsius)
         << " °F" << endl;

    return 0;
}