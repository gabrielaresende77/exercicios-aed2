/*
Crie o jogo Pedra, Papel ou Tesoura, nos moldes do jogo par ou ímpar.
*/

#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
using namespace std;

int main() {
    string opcoes[3] = {"Pedra", "Papel", "Tesoura"};
    int escolhaUsuario, escolhaComputador;

    // Inicializa o gerador de números aleatórios com a hora atual
    srand(time(0));

    cout << "=== Jogo Pedra, Papel ou Tesoura ===\n";
    cout << "Escolha uma opcao:\n";
    cout << "0 - Pedra\n1 - Papel\n2 - Tesoura\n";
    cout << "Digite sua escolha: ";
    cin >> escolhaUsuario;

    if (escolhaUsuario < 0 || escolhaUsuario > 2) {
        cout << "Opcao invalida!\n";
        return 1;
    }

    // Computador escolhe aleatoriamente
    escolhaComputador = rand() % 3; // Gera um número aleatório entre 0 e 2 (0=Pedra, 1=Papel, 2=Tesoura)

    cout << "Voce escolheu: " << opcoes[escolhaUsuario] << endl;
    cout << "Computador escolheu: " << opcoes[escolhaComputador] << endl;

    // Regras do jogo
    if (escolhaUsuario == escolhaComputador) {
        cout << "Empate!\n";
    } else if ((escolhaUsuario == 0 && escolhaComputador == 2) || // Pedra ganha de Tesoura
               (escolhaUsuario == 1 && escolhaComputador == 0) || // Papel ganha de Pedra
               (escolhaUsuario == 2 && escolhaComputador == 1)) { // Tesoura ganha de Papel
        cout << "Voce venceu!\n";
    } else {
        cout << "Computador venceu!\n";
    }

    return 0;
}