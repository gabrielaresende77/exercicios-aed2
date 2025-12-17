/* 
Crie um programa que:
-Receba uma temperatura em Celsius.
-Utilize uma função para converter para Fahrenheit.
-Exiba o resultado na tela.
*/

#include <iostream>
#include <locale.h>
using namespace std;

float converterParaFahrenheit(float celsius){
	return (celsius * 1.8 + 32);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float celsius;
	cout << "Informe a temperatura em Celsius: ";
	cin >> celsius;
	
	cout << "A temperatura em Fahrenheit é "
	<< converterParaFahrenheit(celsius) << endl;
	
	return 0;
}