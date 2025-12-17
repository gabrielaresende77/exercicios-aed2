/*
Exercício 1 – Campeonato de Futebol

Crie uma struct Time com os campos:

nome
vitorias
empates
derrotas

Leia os dados de 4 times. Cada vitória vale 3 pontos, empate 1 ponto e derrota 0.

Crie uma função que calcule os pontos totais de cada time.
Crie uma função que exiba o time com maior pontuação.
*/

#include <iostream>
#include <string>
using namespace std;

struct Time {
    string nome;
    int vitorias;
    int empates;
    int derrotas;
};

// Função para calcular os pontos totais
int calcularPontos(const Time& t) {
    return t.vitorias * 3 + t.empates * 1 + t.derrotas * 0;
}

// Função para exibir o time com maior pontuação
void exibirMaiorPontuacao(Time times[], int tamanho) {
    int indiceMaior = 0;
    int maiorPontuacao = calcularPontos(times[0]);

    for (int i = 1; i < tamanho; i++) {
        int pontos = calcularPontos(times[i]);
        if (pontos > maiorPontuacao) {
            maiorPontuacao = pontos;
            indiceMaior = i;
        }
    }

    cout << "\nTime com maior pontuação:\n";
    cout << "Nome: " << times[indiceMaior].nome << endl;
    cout << "Pontuação: " << maiorPontuacao << " pontos\n";
}

int main() {
    Time times[4];

    // Leitura dos dados
    for (int i = 0; i < 4; i++) {
        cout << "Digite o nome do time " << i + 1 << ": ";
        cin >> times[i].nome;

        cout << "Vitorias: ";
        cin >> times[i].vitorias;

        cout << "Empates: ";
        cin >> times[i].empates;

        cout << "Derrotas: ";
        cin >> times[i].derrotas;

        cout << endl;
    }

    // Exibir o time com maior pontuação
    exibirMaiorPontuacao(times, 4);

    return 0;
}