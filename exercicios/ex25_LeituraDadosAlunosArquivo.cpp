/* Crie um programa que leia os dados do arquivo anterior e imprima na tela. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream arquivo("ex24_alunos.txt");

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    string linha;

    cout << "=== Dados dos alunos cadastrados ===\n" << endl;

    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }

    arquivo.close();

    return 0;
}