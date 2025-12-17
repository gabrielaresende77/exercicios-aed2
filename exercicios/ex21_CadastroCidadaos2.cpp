/*
Crie um programa para cadastro de cidadãos:

-Crie uma função menu que mostre as opções:
	1. Cadastro
	2. Consulta por profissão
	3. Média de idade
	4. Maior salário
	5. Apagar cadastro
	6. Sair
	
-Os campos a serem cadastrados são: nome, idade, salário e profissão.

-No início do programa, leia o número de habitantes que serão cadastrados.
*/

#include <iostream>
#include <vector>
#include <string>
#include <locale.h>
using namespace std;

struct TCidadao {
	string nome, profissao;
	int idade;
	float salario;	
};

vector<TCidadao> cidadaos;

int menu(){
	int op;
	cout<<"\n==== Opções do Sistema ====\n";
    cout << "1 - Cadastro\n";
    cout << "2 - Consulta por profissão\n";
    cout << "3 - Média de idades\n";
    cout << "4 - Maior salário\n";
    cout << "5 - Excluir cadastro\n";
    cout << "0 - Sair\n";
    
	do{
		cout<<"Informe sua opção: ";
		cin >> op;
		if(op < 0 || op > 5)
			cout<< "Opção inválida!\n";
	}while(op < 0 || op > 5);
	
	return op;
}

void cadastra()
{
	TCidadao obj; // Cria um objeto temporário do tipo TCidadao
	cout << "Nome: ";
	cin >> obj.nome;
	cout << "Profissão: ";
	cin >> obj.profissao;
	cout << "Idade: ";
	cin >> obj.idade;
	cout << "Salário: ";
	cin >> obj.salario;
	cidadaos.push_back(obj); // Adiciona o cidadão ao vetor
	cout << "Cadastro realizado com sucesso!\n";
}

void listaProfissao()
{
	string prof;
	cout << "Profissão pesquisada: ";
	cin >> prof; // Lê a profissão a ser pesquisada
	for(int i = 0; i < (int)cidadaos.size(); i++){ // Percorre todos os cidadãos
		if(cidadaos[i].profissao == prof)
			cout << cidadaos[i].nome << "\n";
	}
}

float mediaIdade()
{
	int soma = 0;
	int tam = cidadaos.size(); // Tamanho do vetor de cidadãos
	for(int i = 0; i < tam; i++){
		soma += cidadaos[i].idade;
	}
	
	return (float)soma/tam; // divisão real
}

float maiorSal()
{
	float maior = 0;
	for(int i = 0; i < (int)cidadaos.size(); i++){
		if(cidadaos[i].salario > maior)
			maior = cidadaos[i].salario;
	}

    return maior;	
}

void excluir()
{
	string nome;
	cout << "Informe o nome do cidadão a ser excluído: ";
	cin >> nome;
	for(int i = 0; i < (int)cidadaos.size(); i++){
		if(cidadaos[i].nome == nome){
			cidadaos.erase(cidadaos.begin() + i); // Remove do vetor
			cout << "Cadastro excluído com sucesso!\n";
			
			return;
		}
	}
	cout << "Cidadão não encontrado!\n";
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	
    int n;
    cout << "Quantos habitantes deseja cadastrar inicialmente? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nCadastro " << i + 1 << ":\n";
        cadastra();
    }
    
	int op;
	do{
		op = menu();	
		switch(op){
			case 1:
				cadastra();
				break;
			case 2:
				listaProfissao();
				break;
			case 3 :
				cout<<"A média das idades é: " << mediaIdade() << "\n";	
				break;
			case 4:
				cout << "O maior salário é : R$"<< maiorSal() <<" \n";	
				break;
			case 5:
				excluir();	
				break;
			default:
				cout<< "Encerrando o programa...\n";
				break;
		}
	}while (op!=0);
	
	return 0;
}