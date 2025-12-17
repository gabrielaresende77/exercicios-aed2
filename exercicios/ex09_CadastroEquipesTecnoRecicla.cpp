/* 
Crie um programa que cadastre os grupos de trabalho no TecnoRecicla.

O programa deverá utilizar funções:
- Uma função para exibir o menu;
- Uma função para leitura dos dados das equipes;
- Uma função que retorne a quantidade de equipes cadastradas.

Cada equipe deverá armazenar:
- Nome da equipe,
- Quantidade de membros,
- Contato.

Sintaxe de função em C++:
tipoderetorno nome(parâmetros){
    // código
}
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct TEquipe{
	string nome, contato;
	int qtde;
};

// Função do menu
int menu(){
	int opcao;
	do{	
		cout << "\nFuncionalidades:\n";
		cout << "1 - Cadastrar equipe\n";
		cout << "2 - Informar quantidade de equipes cadastradas\n";
		cout << "3 - Sair\n";
		cout << "Informe sua opção: ";
	   	cin >> opcao;
	}while(opcao < 1 || opcao > 3);
	return opcao;
}

// Função para cadastrar uma equipe
TEquipe cadastra(){
	TEquipe equipe;
	cout << "Informe o nome da nova equipe: ";
	cin >> equipe.nome;
	cout << "Informe o número de membros da equipe " << equipe.nome << ": ";
	cin >> equipe.qtde;
	cout << "Informe telefone de contato: ";
	cin >> equipe.contato;
	return equipe;
}

// Função para informar quantidade de equipes cadastradas
void informaQtde(int qtde){
	cout << "Foram cadastradas " << qtde << " equipes.\n";
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	TEquipe equipes[30];
	int cont = 0;
	int op;
	
	do{
		op = menu();
		switch(op){
			case 1: // cadastrar
				if(cont < 30){
					equipes[cont] = cadastra();
					cont++;
				}else{
					cout << "Não há espaço disponível para cadastro.\n";
				}
				break;
			case 2: // quantidade
				informaQtde(cont);
				break;
			case 3:
				cout << "Atividade encerrada!";
				break;
			default:
				break;
		}
	}while(op != 3);
	
	return 0;
}