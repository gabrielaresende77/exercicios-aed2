/*
Exercício 3 – Leitura de arquivo e listagem

Com base no arquivo alunos.txt gerado no exercício anterior:
-Faça um programa que leia os dados do arquivo.
-Mostre apenas os alunos com nota final maior ou igual a 60.

*Utilize ifstream e struct.
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

int main() {
    ifstream arq("ex2_alunos.txt");

    if (!arq.is_open()) {
        cout << "Erro ao abrir o arquivo ex2_alunos.txt!\n";
        return 1;
    }

    Aluno aluno;

    cout << "=== Alunos Aprovados (Nota >= 60) ===\n\n";

    // Tenta ler o nome até achar um ';'. Se conseguir, entra no loop.
    while (getline(arq, aluno.nome, ';')) {
        
        arq >> aluno.matricula;
        arq.ignore(); // Pula o ponto e vírgula que vem depois do número

        getline(arq, aluno.curso, ';');

        arq >> aluno.notaFinal;
        arq.ignore(); // Pula o \n (enter) para ir para a próxima linha

        if (aluno.notaFinal >= 60) {
            cout << "Nome: " << aluno.nome << endl;
            cout << "Matricula: " << aluno.matricula << endl;
            cout << "Curso: " << aluno.curso << endl;
            cout << "Nota Final: " << aluno.notaFinal << "\n\n";
        }
    }

    arq.close();
    return 0;
}