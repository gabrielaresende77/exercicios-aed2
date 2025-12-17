/*
Crie uma função `bool ehPrimo(int n)` que verifique se um número é primo.
Na função `main`, leia um número e use a função para exibir se ele é primo ou não.
*/

#include <iostream>
#include <locale.h>
using namespace std;

bool ehPrimo (int n){
    if (n < 2){
		return false;
	}

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int val;
	cout << "Digite um número inteiro: ";
	cin >> val;
	
	if(ehPrimo(val)){
		cout << "O número " << val << " é primo!" << endl;
	}else{
        cout << "O número " << val << " não é primo!" << endl;
	}
	
	return 0;
}