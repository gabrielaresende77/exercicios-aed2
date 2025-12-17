/*
Crie um programa que leia e exiba, linha por linha, o conteúdo de um arquivo de
texto. O programa deve verificar se o arquivo foi aberto corretamente e, caso
contrário, exibir uma mensagem de erro.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string linha;
	
	// Cria objeto ifstream (arq) associado ao arquivo (ex22_arquivo.txt)
	ifstream arq ("ex22_arquivo.txt");
	
	if(arq.is_open()) {
		while(!arq.eof())
		{
			getline(arq, linha);
			cout << linha << endl;
		}
		arq.close();
	} else {
		cout << "Erro ao abrir o arquivo!" << endl;
	}
	
	return 0;
}