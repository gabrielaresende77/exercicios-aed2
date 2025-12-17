/*
Crie um programa que grave mensagens em um arquivo de texto. O programa deve
adicionar (sem sobrescrever) duas mensagens fixas e uma mensagem digitada pelo
usuário ao final do arquivo.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Cria o objeto de saída
	ofstream file;
	
	file.open("ex23_dados.txt", ios::app);
	
	if (!file.is_open()) {
		cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }
    
	file << "Aqui vai uma mensagem teste\n";
	file << "Olá Mundo!\n";
	
	string msg;
	cout << "Digite uma mensagem qualquer: ";
	getline(cin,msg);
	file << msg << endl;
	
	file.close();
	
	cout << "Mensagem gravada com sucesso!" << endl;
	return 0;
}