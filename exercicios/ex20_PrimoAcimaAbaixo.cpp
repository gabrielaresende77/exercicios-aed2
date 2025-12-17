/*
Faça uma função chamada primo que recebe como parâmetro um inteiro X e dois
outros inteiros X1 e X2 passados por referência. A função deve retornar em X1 
o maior número primo que é menor do que X e deve retornar em X2 o menor número 
primo que é maior do que X.
*/

#include <iostream>
using namespace std;

void primo(int x, int &x1, int &x2){
	int aux = 0;
	//maior primo abaixo de x
	for(int i = x - 1; i > 1; i--){
		for(int z = 2; z < x/2; z++){
			if(i % z == 0){
				aux++;
			}
		}
		if(aux == 0){
			x1 = i;
			break;
		}
		aux = 0;
	}
	aux = 0;
	int i = x;
	//menor primo acima de x
	bool p = false;
	while(!p){
		i++;
		for(int z = 2; z < i/2; z++){
			if(i % z == 0){
				aux++;
			}
		}
		if(aux == 0){
			p = true;
		}
		aux = 0;
	}
	x2 = i;
}

int main()
{
	int val = 73, val1, val2;
	primo(val, val1, val2);
	cout << "Menor primo = " << val1 << "\n";
	cout << "Maior primo = " << val2;
	
	return 0;
}