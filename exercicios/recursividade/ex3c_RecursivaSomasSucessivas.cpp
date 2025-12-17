/*
3. Desenvolva algoritmos recursivos para os seguintes problemas: 
c)Multiplicação de dois números naturais, através de somas sucessivas 
(Ex.: 6*4 = 4 + 4 + 4 + 4 + 4 + 4). 
*/

#include <iostream>
using namespace std;

int multiplicar(int a, int b) {
    if (b == 0) return 0;
    return a + multiplicar(a, b - 1);
}

int main() {
    int a, b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;

    cout << "Resultado: " << multiplicar(a, b);
    return 0;
}