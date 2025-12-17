/*
Crie um programa que permita cadastrar até 10 pessoas, com:

- Nome
- Altura
- Data de nascimento (dia, mês, ano)

O programa deve apresentar um menu com as opções:

1. Inserir dados
2. Listar todos os cadastros
3. Listar pessoas nascidas antes de uma data informada
0. Sair
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct TData {
    int dia, mes, ano;
};

struct TPessoas {
    string nome;
    float altura;
    TData dataNasc;
};

int main() {
    TPessoas pessoas[10];
    int cont = 0, opcao = 0;

    setlocale(LC_ALL, "portuguese");

    do {
        cout << "\nOpções\n";
        cout << "1- Inserir dados\n";
        cout << "2- Listar todos\n";
        cout << "3- Lista por data\n";
        cout << "0- Sair\n";
        cout << "Informe sua opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                if(cont >= 10) {
                    cout << "Limite de cadastros atingido!" << endl;
                    break;
                }
                cout << "Nome: "; cin >> pessoas[cont].nome;
                cout << "Altura: "; cin >> pessoas[cont].altura;
                cout << "Data de Nascimento\nDia: "; cin >> pessoas[cont].dataNasc.dia;
                cout << "Mês: "; cin >> pessoas[cont].dataNasc.mes;
                cout << "Ano: "; cin >> pessoas[cont].dataNasc.ano;
                cont++;
                cout << "Cadastro efetuado!" << endl;
                break;

            case 2:
                for(int i = 0; i < cont; i++) {
                    cout << "\nNome: " << pessoas[i].nome << endl;
                    cout << "Altura: " << pessoas[i].altura << endl;
                    cout << "Data de Nascimento: " 
                         << pessoas[i].dataNasc.dia << "/"
                         << pessoas[i].dataNasc.mes << "/"
                         << pessoas[i].dataNasc.ano << endl;
                }
                break;

            case 3: {
                int d, m, a;
                cout << "Informe uma data de referência\nDia: "; cin >> d;
                cout << "Mês: "; cin >> m;
                cout << "Ano: "; cin >> a;
                cout << "Pessoas nascidas antes dessa data:" << endl;
                for(int i = 0; i < cont; i++) {
                    if(pessoas[i].dataNasc.ano < a ||
                       (pessoas[i].dataNasc.ano == a && pessoas[i].dataNasc.mes < m) ||
                       (pessoas[i].dataNasc.ano == a && pessoas[i].dataNasc.mes == m && pessoas[i].dataNasc.dia <= d)) {
                        cout << pessoas[i].nome << endl;
                    }
                }
                break;
            }

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida!" << endl;
        }

    } while(opcao != 0);

    return 0;
}