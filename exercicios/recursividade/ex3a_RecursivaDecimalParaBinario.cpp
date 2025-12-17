/*
3. Desenvolva algoritmos recursivos para os seguintes problemas: 
a)Impressão de um número decimal em base binária
*/

#include <iostream>
using namespace std;

void decimalParaBinario(int n) {
    if (n == 0) return;
    decimalParaBinario(n / 2);
    cout << (n % 2);
}

int main() {
    int n;
    cout << "Digite um numero decimal: ";
    cin >> n;

    if (n == 0) cout << "0";
    else decimalParaBinario(n);

    return 0;
}