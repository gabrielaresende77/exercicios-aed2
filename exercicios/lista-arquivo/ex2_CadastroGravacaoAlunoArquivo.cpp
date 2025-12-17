/*
Exercício 2 – Cadastro e gravação em arquivo

Desenvolva um programa que:
-Cadastre até 10 alunos com os campos: nome, matrícula, curso e nota final.
-Grave os dados em um arquivo de texto chamado alunos.txt.

*Utilize funções, struct e arquivos (ofstream).
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
    string curso;
    float notaFinal;
};

// Função para cadastrar os alunos
void cadastrarAlunos(Aluno vet[], int qtd) {
    // Limpa o buffer do 'cin >> qtd' do main para não pular o primeiro nome
    cin.ignore(); 

    for (int i = 0; i < qtd; i++) {
        cout << "\n--- Cadastro do aluno " << i + 1 << " ---\n";

        cout << "Nome: ";
        getline(cin, vet[i].nome);

        cout << "Matrícula: ";
        cin >> vet[i].matricula;
        cin.ignore();

        cout << "Curso: ";
        getline(cin, vet[i].curso);

        cout << "Nota final: ";
        cin >> vet[i].notaFinal;
        cin.ignore();
    }
}

// Função para gravar os dados
void gravarArquivo(Aluno vet[], int qtd) {
    ofstream arq("ex2_alunos.txt"); // Abre (ou cria) o arquivo limpo

    if (!arq.is_open()) {
        cout << "Erro ao abrir o arquivo!\n";
        return;
    }

    for (int i = 0; i < qtd; i++) {
        // Grava: Nome;Matricula;Curso;Nota
        arq << vet[i].nome << ";" 
            << vet[i].matricula << ";" 
            << vet[i].curso << ";" 
            << vet[i].notaFinal << endl;
    }

    arq.close();
    cout << "\nDados gravados no arquivo ex2_alunos.txt com sucesso!\n";
}

int main() {
    Aluno alunos[10];
    int qtd;

    cout << "Quantos alunos deseja cadastrar? (max 10): ";
    cin >> qtd;

    if (qtd < 1 || qtd > 10) {
        cout << "Quantidade inválida!\n";
        return 0;
    }

    cadastrarAlunos(alunos, qtd);
    gravarArquivo(alunos, qtd);

    return 0;
}