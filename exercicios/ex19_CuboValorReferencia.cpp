/*
Crie um programa que pede um inteiro ao usuário. Em seguida, ele deve 
transformar esse valor em seu cubo. Faça isso usando uma função que recebe 
passagem por valor e outra que usa parâmetro e variável de referência. 
Deixe bem claro que uma altera o valor somente dentro da função (valor) e a 
outra altera o valor original da variável (referência). 

Crie um programa que:
-Peça ao usuário para digitar um número inteiro.
-Utilize uma função que calcule o cubo do número usando passagem por valor
(não altera o valor original da variável).
-Utilize outra função que calcule o cubo do número usando passagem por referência
(altera a variável original).
-Mostre claramente a diferença entre os dois métodos.
*/

#include <iostream>
#include <locale.h>
using namespace std;

// Função que recebe por valor (não altera a variável original)
int cuboValor(int x){
	return x*x*x;
}

// Função que recebe por referência (altera a variável original)
void cuboReferencia(int x, int &y){
	y = x*x*x;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int numero, resultadoRef;
	
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    // Usando passagem por valor
    cout << "Cubo (passagem por valor) = " << cuboValor(numero) << endl;

    // Usando passagem por referência
    cuboReferencia(numero, resultadoRef);
    cout << "Cubo (passagem por referencia) = " << resultadoRef << endl;

    // Mostrando que o valor original não foi alterado
    cout << "Valor original digitado = " << numero << endl;
	
	return 0;
}