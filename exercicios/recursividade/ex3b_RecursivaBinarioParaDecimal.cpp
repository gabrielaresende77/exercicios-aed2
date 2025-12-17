/*
3. Desenvolva algoritmos recursivos para os seguintes problemas: 
b)Conversão de um número binário para decimal
*/

#include <iostream>
#include <string>
using namespace std;

int binarioParaDecimal(string bin, int pos = 0) {
    if (pos == bin.size()) return 0;
    int bit = bin[pos] - '0';
    return bit * (1 << (bin.size() - pos - 1)) +
           binarioParaDecimal(bin, pos + 1);
}

int main() {
    string bin;
    cout << "Digite um numero binario: ";
    cin >> bin;

    cout << "Decimal: " << binarioParaDecimal(bin);
    return 0;
}