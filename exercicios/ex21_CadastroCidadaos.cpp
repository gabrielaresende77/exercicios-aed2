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
#include <vector> // Para usar vetor dinâmico (vector)
#include <string>
using namespace std;

struct TCidadao {
    string nome, profissao;
    int idade;
    float salario;    
};

vector<TCidadao> cidadaos; // Vetor global para armazenar todos os cidadãos

// Função que exibe o menu e retorna a opção
int menu() {
    int op;
    cout << "\nOpções do sistema\n";
    cout << "1 - Cadastro\n2 - Consulta por profissão\n3 - Média de idade\n";
    cout << "4 - Maior salário\n5 - Excluir cadastro\n0 - Sair\n";
    do {
        cout << "Informe sua opção: ";
        cin >> op;
        if(op > 5 || op < 0)
            cout << "Opção inválida!! \n";
    } while(op > 5 || op < 0);
    return op;
}

// Função para cadastrar cidadão
void cadastra() {
    TCidadao obj;
    cout << "Nome: "; cin >> obj.nome;
    cout << "Profissão: "; cin >> obj.profissao;
    cout << "Idade: "; cin >> obj.idade;
    cout << "Salário: "; cin >> obj.salario;
    cidadaos.push_back(obj); // Adiciona o cidadão ao vetor
}

// Consulta por profissão
void consulta(string prof) {
    cout << "Cidadãos com a profissão " << prof << ":\n";
    bool encontrado = false;
    for(int i = 0; i < cidadaos.size(); i++) { // size(): Retorna o número de elementos no vetor
        if(cidadaos[i].profissao == prof) {
            cout << cidadaos[i].nome << "\n";
            encontrado = true;
        }
    }
    if(!encontrado) cout << "Nenhum cidadão encontrado.\n";
}

// Média de idade
float mediaIdade() {
    if(cidadaos.empty()) return 0; // Retorna 0 se não houver cidadãos
    float soma = 0;
    for(int i = 0; i < cidadaos.size(); i++)
        soma += cidadaos[i].idade;
    return soma / cidadaos.size();
}

// Maior salário
float maiorSalario() {
    if(cidadaos.empty()) return 0;
    float maior = cidadaos[0].salario;
    for(int i = 1; i < cidadaos.size(); i++) {
        if(cidadaos[i].salario > maior)
            maior = cidadaos[i].salario;
    }
    return maior;
}

// Excluir cadastro por nome
void excluir() {
    string nomeExcluir;
    cout << "Digite o nome do cidadão a ser excluído: ";
    cin >> nomeExcluir;
    for(int i = 0; i < cidadaos.size(); i++) {
        if(cidadaos[i].nome == nomeExcluir) {
            cidadaos.erase(cidadaos.begin() + i); // erase(): Remove elementos do vetor
            // begin(): Retorna um iterador para o primeiro elemento
            cout << "Cidadão excluído com sucesso!\n";
            return;
        }
    }
    cout << "Cidadão não encontrado.\n";
}

int main() {
    int op;
    setlocale(LC_ALL,"portuguese");

    int n;
    cout << "Informe o número de habitantes: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        cadastra();

    do {
        op = menu();    
        switch(op) {
            case 1:
                cadastra();
                break;
            case 2: {
                string prof;
                cout << "Informe a profissão para consulta: ";
                cin >> prof;
                consulta(prof);
                break;
            }
            case 3:
                cout << "Média de idade: " << mediaIdade() << endl;
                break;
            case 4:
                cout << "Maior salário: " << maiorSalario() << endl;
                break;
            case 5:
                excluir();
                break;
            case 0:
                cout << "Saindo do sistema...\n";
                break;
        }    
    } while (op != 0);

    return 0;
}