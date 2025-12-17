/*
Crie um programa que:
-Receba as medidas dos três lados de um triângulo.
-Utilize uma função que determine se o triângulo existe ou não (Um triângulo
existe se cada lado for maior que a diferença absoluta dos outros dois lados e
menor que a soma dos outros dois lados.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool verifica(float l1, float l2, float l3){
	// Condição de existência do triângulo
	return (l1 > abs(l2 - l3) && l1 < l2 + l3) && // abs: valor absoluto. Ele retorna sempre o valor positivo de um número, ignorando o sinal.
           (l2 > abs(l1 - l3) && l2 < l1 + l3) &&
           (l3 > abs(l1 - l2) && l3 < l1 + l2);
}

int main()
{
	float lado1, lado2, lado3;
	
    cout << "Informe as medidas dos lados do triangulo: ";
    cin >> lado1 >> lado2 >> lado3;

    if (verifica(lado1, lado2, lado3)){
		cout << "Forma triangulo" << endl;
	}else{
		cout << "Nao forma triangulo." << endl;
	}

    return 0;

}