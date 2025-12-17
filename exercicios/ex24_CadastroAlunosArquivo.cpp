/*
Crie um programa que cadastre os dados de 3 alunos: nome, idade, celular e email.
Os dados devem ser armazenados (acrescentados) em um arquivo.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string nome, celular, email;
	int idade;
	
	ofstream dados;
	dados.open("ex24_alunos.txt", ios::app);
	
	if (!dados.is_open()) {
		cout << "Erro ao abrir o arquivo!" << endl;
		return 1;
    }
	
	for (int i = 0; i < 3; i++) {
		cout << "=== Dados cadastrais do aluno " << (i + 1) << " ===" << endl;
		cout << "Nome: "; getline(cin, nome);
		cout << "Idade: "; cin >> idade;
		cin.ignore(); // limpa o buffer para o próximo getline
		cout << "Celular: "; getline(cin, celular);
		cout << "E-mail: ";getline(cin, email);
		dados << nome << "; " << idade << "; " << celular << "; " << email << endl;
		cout << "Aluno cadastrado com sucesso!\n" << endl;
	}
	
	dados.close();
	cout << "Cadastro finalizado." << endl;
	
	return 0;
}