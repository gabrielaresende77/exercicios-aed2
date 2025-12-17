/*
Exercício 7 – Análise de Notas por Turma

Crie um sistema para analisar as notas de 3 turmas. Use uma matriz 3x5, onde:

Cada linha representa uma turma.
Cada coluna representa a nota de um aluno.

Preencha os dados.

Crie funções para:
Calcular a média de cada turma
Mostrar qual turma teve a maior média
*/

#include <iostream>
using namespace std;

// Função para calcular a média de uma turma (linha da matriz)
float calcularMedia(float notas[3][5], int turma) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += notas[turma][i];
    }
    return soma / 5.0;
}

// Função para encontrar turma com maior média
int turmaMaiorMedia(float medias[], int tamanho) {
    int indiceMaior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (medias[i] > medias[indiceMaior]) {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

int main() {
    float notas[3][5];

    // Entrada de dados
    cout << "Digite as notas das 3 turmas (5 alunos cada):\n\n";

    for (int t = 0; t < 3; t++) {
        cout << "Turma " << t + 1 << ":\n";
        for (int a = 0; a < 5; a++) {
            cout << "Nota do aluno " << a + 1 << ": ";
            cin >> notas[t][a];
        }
        cout << endl;
    }

    // Calculando médias
    float medias[3];
    for (int t = 0; t < 3; t++) {
        medias[t] = calcularMedia(notas, t);
    }

    // Encontrando turma com maior média
    int melhor = turmaMaiorMedia(medias, 3);

    // Exibição
    cout << "\n===== MÉDIAS DAS TURMAS =====\n";
    for (int t = 0; t < 3; t++) {
        cout << "Turma " << t + 1 << ": " << medias[t] << endl;
    }

    cout << "\nA turma com MAIOR média é a Turma " << melhor + 1
         << " com média " << medias[melhor] << endl;

    return 0;
}