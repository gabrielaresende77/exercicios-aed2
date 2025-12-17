/*
Crie uma função chamada calcularBhaskara que receba os coeficientes a, b e c de
uma equação do segundo grau e calcule suas raízes reais, se existirem, usando a
fórmula de Bhaskara.

Na função main, leia os coeficientes e chame a função.
A função deve:
- Verificar se é uma equação do segundo grau (a != 0)
- Calcular o delta (b² - 4ac)
- Exibir as raízes reais, se existirem
*/

#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

void calcularBhaskara(float a, float b, float c){
	if (a==0){
		cout<<"Não é equação de segundo grau!" << endl;
		return;
	}
	
	float delta = (b*b) - (4*a*c);
	
	if (delta < 0){
		cout<<"Não há raízes reais!" << endl;
	}else{
		float x1 = (-b + sqrt(delta))/(2*a); // sqrt(delta): raiz quadrada de delta
		float x2 = (-b - sqrt(delta))/(2*a); // sqrt(delta): raiz quadrada de delta
		cout << "Raiz x1 = " << x1 << endl;
		cout << "Raiz x2 = " << x2 << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c;
	cout << "Digite os valores a, b e c: ";
	cin >> a >> b >> c;
	
	calcularBhaskara(a,b,c);
	
	return 0;
}