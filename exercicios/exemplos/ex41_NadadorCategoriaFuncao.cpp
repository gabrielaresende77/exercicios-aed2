/*
Crie uma função que receba a idade de um nadador por parâmetro e retorne,
também por parâmetro, a categoria do nadador de acordo com:

Idade           Categoria
5 a 7 anos      Infantil A
8 a 10 anos     Infantil B
11 a 13 anos    Juvenil A
14 a 17 anos    Juvenil B
Maiores de 18   Adulto (inclusive)
*/

#include <iostream>
using namespace std;

// Função que define a categoria do nadador
void getCategoria(int idade, string &cat) {
	if (idade >= 5 && idade <= 7)
		cat = "Infantil A";
    else if (idade >= 8 && idade <= 10)
        cat = "Infantil B";
    else if (idade >= 11 && idade <= 13)
        cat = "Juvenil A";
    else if (idade >= 14 && idade <= 17)
        cat = "Juvenil B";
    else if (idade >= 18)
        cat = "Adulto";
    else
        cat = "[Idade invalida]";
}

int main() {
    int idade;
    cout << "Informe a idade do nadador: ";
	cin >> idade;
	
    string categoria;
    getCategoria(idade, categoria);
    
    cout << "Esse nadador e da categoria " << categoria << endl;
    
	return 0;
}