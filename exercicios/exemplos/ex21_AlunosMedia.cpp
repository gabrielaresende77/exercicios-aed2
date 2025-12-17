/*
Crie um programa em C++ que cadastre os dados de um aluno contendo:

Nome
Idade
Três notas em disciplinas diferentes

O programa deve calcular a média das notas e exibir todos os dados do aluno.
*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float notas[3]; // notas em três disciplinas
};

// Função que calcula a média das notas do aluno
float calculaMedia(float notas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    Aluno aluno;

    cout << "Digite o nome do aluno: ";
    getline(cin, aluno.nome);
    cout << "Digite a idade do aluno: ";
    cin >> aluno.idade;

    cout << "Digite as 3 notas do aluno: ";
    for (int i = 0; i < 3; i++) {
        cin >> aluno.notas[i];
    }

    // Calcula e exibe a média
    float media = calculaMedia(aluno.notas, 3);
    
    cout << "\nNome: " << aluno.nome << "\nIdade: " << aluno.idade << "\nMedia: " << media << endl;

    return 0;
}
