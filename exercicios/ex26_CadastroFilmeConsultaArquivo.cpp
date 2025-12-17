/* 
Crie um programa que cadastre os dados de um filme em um arquivo 
e permita consultar os cadastros de filmes.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int opcao;
    string titulo, diretor, genero;
    int ano;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1 - Cadastrar filme" << endl;
        cout << "2 - Consultar cadastros" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;
        cin.ignore(); // limpar buffer

        if (opcao == 1) {
            ofstream arquivo("ex26_filmes.txt", ios::app);

            if (!arquivo.is_open()) {
                cout << "Erro ao abrir o arquivo!" << endl;
                continue;
            }

            cout << "\nTítulo do filme: ";
            getline(cin, titulo);

            cout << "Diretor: ";
            getline(cin, diretor);

            cout << "Gênero: ";
            getline(cin, genero);

            cout << "Ano de lançamento: ";
            cin >> ano;
            cin.ignore();

            arquivo << titulo << "; " << diretor << "; " << genero << "; " << ano << endl;

            arquivo.close();

            cout << "\nFilme cadastrado com sucesso!\n";
        }
        else if (opcao == 2) {
            ifstream arquivo("ex26_filmes.txt");

            if (!arquivo.is_open()) {
                cout << "Nenhum cadastro encontrado." << endl;
                continue;
            }

            string linha;
            cout << "\n===== FILMES CADASTRADOS =====\n" << endl;

            while (getline(arquivo, linha)) {
                cout << linha << endl;
            }

            arquivo.close();
        }

    } while (opcao != 3);

    cout << "\nPrograma encerrado." << endl;
    return 0;
}