/*
Crie um programa em C++ que cadastre os dados de um aluno contendo:

Nome
Matrícula
Notas de 2 semestres, sendo 2 notas por semestre.

O programa deve calcular a média geral e exibir todos os dados do aluno.
*/

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float notas[2][2]; // 2 linhas (semestres) x 2 colunas (provas)
};

// Função para calcular a média das notas de um aluno
float calcularMedia(Aluno aluno) {
    float soma = 0;
    int totalNotas = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma += aluno.notas[i][j];
            totalNotas++;
        }
    }
    return soma / totalNotas;
}

// Função para imprimir os dados de um aluno, incluindo as notas por semestre
void imprimirAluno(Aluno aluno) {
    cout << "Nome: " << aluno.nome << endl;
    cout << "Matrícula: " << aluno.matricula << endl;
    
    // Imprimindo as notas por semestre com "-" entre elas
    for (int i = 0; i < 2; i++) {
        cout << "Semestre " << i + 1 << ": ";
        for (int j = 0; j < 2; j++) {
            cout << aluno.notas[i][j];
            if (j < 1) {
                cout << " - "; // Adiciona o "-" entre as notas, mas não após a última nota
            }
        }
        cout << endl; // Quebra de linha para o próximo semestre
    }
    
    cout << "Média geral: " << calcularMedia(aluno) << endl;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    Aluno aluno;

    // Entrada de dados
    cout << "Digite o nome do aluno: ";
    getline(cin, aluno.nome);
    
    cout << "Digite a matrícula do aluno: ";
    cin >> aluno.matricula;

    // Entrada das notas
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Digite a nota do semestre " << i + 1 << ", prova " << j + 1 << ": ";
            cin >> aluno.notas[i][j];
        }
    }

    // Exibe os dados do aluno
    imprimirAluno(aluno);

    return 0;
}
