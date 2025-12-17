#include <iostream>
using namespace std;

// Struct para armazenar dados de um funcionário
struct Funcionario {
    string nome;            // Nome do funcionário
    int idade;              // Idade do funcionário
    float horas[5];         // Horas trabalhadas em 5 dias
    float mediaHoras;       // Média de horas da semana
};

// Função para calcular a média das horas trabalhadas
void calcularMediaHoras(Funcionario &func) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += func.horas[i];
    }
    func.mediaHoras = soma / 5;
}

int main() {
    Funcionario funcionarios[3]; // Array de 3 funcionários

    // Entrada dos dados
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome do funcionario " << i + 1 << ": ";
        cin >> funcionarios[i].nome;

        cout << "Digite a idade do funcionario: ";
        cin >> funcionarios[i].idade;

        for (int j = 0; j < 5; j++) {
            cout << "Horas trabalhadas no dia " << j + 1 << ": ";
            cin >> funcionarios[i].horas[j];
        }

        calcularMediaHoras(funcionarios[i]);
    }

    // Exibição dos dados
    cout << "\nRelatório de Funcionários:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nome: " << funcionarios[i].nome << "\n";
        cout << "Idade: " << funcionarios[i].idade << "\n";
        for (int j = 0; j < 5; j++) {
            cout << "Horas no dia " << j + 1 << ": " << funcionarios[i].horas[j] << "\n";
        }
        cout << "Média de horas trabalhadas: " << funcionarios[i].mediaHoras << "\n\n";
    }

    return 0;
}