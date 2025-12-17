/*
3. Desenvolva algoritmos recursivos para os seguintes problemas: 
d)Inversão de uma string
*/

#include <iostream>
#include <string>
using namespace std;

string inverterString(string s) {
	
	// 1. CASO BASE (O critério de parada)
    // A recursão precisa saber quando parar.
    // Se a string estiver vazia ou tiver apenas 1 letra (ex: "A"), 
    // o inverso dela é ela mesma. Então retornamos sem chamar a função de novo.
    if (s.size() <= 1) return s;
    
    // 2. PASSO RECURSIVO (A lógica da inversão)
    // A lógica é: (Inverso do Resto) + (Primeira Letra no Final).
    // s.substr(1): Pega a string a partir do índice 1 (ignora a letra 0). Ex: "CASA" vira "ASA".
    // s[0]: Pega a primeira letra original. Ex: 'C'.
    // O '+' cola a primeira letra no final do resultado da inversão do resto.
    return inverterString(s.substr(1)) + s[0];
}

int main() {
    string texto;
    cout << "Digite uma string: ";
    cin >> texto;

    cout << "Invertida: " << inverterString(texto);
    return 0;
}