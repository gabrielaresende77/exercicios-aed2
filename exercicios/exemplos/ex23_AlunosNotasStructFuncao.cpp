/*
Crie um programa que cadastre 5 alunos, com:

- Matrícula
- Nome
- Notas de 3 avaliações

O programa deve:

1. Indicar o aluno com maior nota na primeira avaliação.
2. Indicar o aluno com maior média geral.
3. Indicar o aluno com menor média geral.
4. Listar os nomes dos alunos com sua situação (Aprovado ou Reprovado), considerando média >= 6 para aprovação.
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct TAluno {
    string mat, nome;
    float nota1, nota2, nota3;
};

// Função para calcular média do aluno
float media(const TAluno &aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    TAluno alunos[5];

    // Leitura dos dados dos alunos
    for(int i = 0; i < 5; i++) {
        cout << "Matrícula: "; cin >> alunos[i].mat;
        cout << "Nome: "; cin >> alunos[i].nome;
        cout << "Nota Avaliação 1: "; cin >> alunos[i].nota1;
        cout << "Nota Avaliação 2: "; cin >> alunos[i].nota2;
        cout << "Nota Avaliação 3: "; cin >> alunos[i].nota3;
        cout << endl;
    }

    // Aluno com maior nota na primeira prova
    float maiorN1 = alunos[0].nota1;
    int pos = 0;
    for(int i = 1; i < 5; i++) {
        if(alunos[i].nota1 > maiorN1) {
            maiorN1 = alunos[i].nota1;
            pos = i;
        }
    }
    cout << "Aluno maior nota 1: " << alunos[pos].nome << " - Nota: " << maiorN1 << endl;

    // Aluno com maior média geral
    float maiorMedia = media(alunos[0]);
    pos = 0;
    for(int i = 1; i < 5; i++) {
        float m = media(alunos[i]);
        if(m > maiorMedia) {
            maiorMedia = m;
            pos = i;
        }
    }
    cout << "Aluno maior média geral: " << alunos[pos].nome << " - Média: " << maiorMedia << endl;

    // Aluno com menor média geral
    float menorMedia = media(alunos[0]);
    pos = 0;
    for(int i = 1; i < 5; i++) {
        float m = media(alunos[i]);
        if(m < menorMedia) {
            menorMedia = m;
            pos = i;
        }
    }
    cout << "Aluno menor média geral: " << alunos[pos].nome << " - Média: " << menorMedia << endl;

    // Listar nomes e situação
    cout << "\nSituação dos alunos:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << alunos[i].nome << " - ";
        if(media(alunos[i]) >= 6)
            cout << "Aprovado";
        else
            cout << "Reprovado";
        cout << endl;
    }

    return 0;
}