/*
Elabore um programa que apresente o seguinte menu de opções:
1- Cadastro
2- Consulta por data de nascimento
3- Alteração
4- Sair

O Cadastro deve chamar uma função responsável por cadastrar um pet, contendo os
seguintes campos: espécie, raça, porte, nome, data de nascimento, nome do dono.

A alteração de registros deve ser feita utilizando o nome do dono e o nome do
pet como critérios de busca.
Os dados devem ser armazenados em um arquivo.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <clocale>

using namespace std;

fstream arq;

// Menu
int menu()
{
    int op;
    cout << "\n=== MENU DE OPÇÕES ===\n";
    cout << "1 - Cadastro\n";
    cout << "2 - Consulta por data de nascimento\n";
    cout << "3 - Alteração\n";
    cout << "4 - Sair\n";
    cout << "Qual sua opção? ";
    cin >> op;
    return op;
}

// Cadastro
void cadastra()
{
    string aux;

    arq.clear();
    arq.seekp(0, ios::end);

    cout << "\n--- Novo Cadastro ---\n";

    cout << "Espécie: ";
    cin >> aux;
    arq << aux << ";";

    cout << "Raça: ";
    cin >> aux;
    arq << aux << ";";

    cout << "Porte: ";
    cin >> aux;
    arq << aux << ";";

    cin.ignore();
    cout << "Nome do Pet: ";
    getline(cin, aux);
    arq << aux << ";";

    cout << "Data Nasc. (dd/mm/aaaa): ";
    cin >> aux;
    arq << aux << ";";

    cin.ignore();
    cout << "Nome do Dono: ";
    getline(cin, aux);
    arq << aux << "\n";

    arq.flush();

    cout << ">> Dados armazenados com sucesso!!\n";
}

// Consulta
void consulta()
{
    string dataBusca, linha;
    bool encontrou = false;

    cout << "\n--- Consulta ---\n";
    cout << "Informe a data de nascimento para busca: ";
    cin >> dataBusca;

    arq.clear();
    arq.seekg(0, ios::beg);

    while (getline(arq, linha))
    {
        if (!linha.empty() && linha.find(dataBusca) != string::npos)
        {
            encontrou = true;
            string tmp = linha;

            cout << "\n[Registro Encontrado]\n";

            cout << "Espécie: " << tmp.substr(0, tmp.find(";")) << endl;
            tmp = tmp.substr(tmp.find(";") + 1);

            cout << "Raça:    " << tmp.substr(0, tmp.find(";")) << endl;
            tmp = tmp.substr(tmp.find(";") + 1);

            cout << "Porte:   " << tmp.substr(0, tmp.find(";")) << endl;
            tmp = tmp.substr(tmp.find(";") + 1);

            cout << "Nome:    " << tmp.substr(0, tmp.find(";")) << endl;
            tmp = tmp.substr(tmp.find(";") + 1);

            cout << "D. Nasc: " << tmp.substr(0, tmp.find(";")) << endl;
            tmp = tmp.substr(tmp.find(";") + 1);

            cout << "Dono:    " << tmp << endl;
            cout << "-------------------------";
        }
    }

    if (!encontrou)
    {
        cout << ">> Nenhum registro encontrado para a data: " << dataBusca << endl;
    }
}

// Alteração
void altera()
{
    string nomePetBusca, nomeDonoBusca, linha, aux;
    bool alterou = false;

    cout << "\n--- Alteração de Registro ---\n";

    cin.ignore();
    cout << "Informe nome do pet: ";
    getline(cin, nomePetBusca);

    cout << "Informe nome do dono: ";
    getline(cin, nomeDonoBusca);

    arq.clear();
    arq.seekg(0, ios::beg);

    ofstream tempFile("temp.txt");

    if (!tempFile.is_open())
    {
        cout << "Erro ao criar arquivo temporário.\n";
        return;
    }

    while (getline(arq, linha))
    {
        if (linha.find(nomePetBusca) != string::npos &&
            linha.find(nomeDonoBusca) != string::npos)
        {
            alterou = true;

            cout << "\nRegistro encontrado! Digite os novos dados:\n";

            cout << "Nova Espécie: ";
            cin >> aux;
            tempFile << aux << ";";

            cout << "Nova Raça: ";
            cin >> aux;
            tempFile << aux << ";";

            cout << "Novo Porte: ";
            cin >> aux;
            tempFile << aux << ";";

            cin.ignore();
            cout << "Novo Nome Pet: ";
            getline(cin, aux);
            tempFile << aux << ";";

            cout << "Nova Data Nasc: ";
            cin >> aux;
            tempFile << aux << ";";

            cin.ignore();
            cout << "Novo Dono: ";
            getline(cin, aux);
            tempFile << aux << "\n";
        }
        else
        {
            tempFile << linha << "\n";
        }
    }

    tempFile.close();
    arq.close();

    if (alterou)
    {
        remove("ex27_pet.txt");
        rename("temp.txt", "ex27_pet.txt");
        cout << ">> Registro alterado com sucesso!\n";
    }
    else
    {
        remove("temp.txt");
        cout << ">> Pet/Dono não encontrado. Nenhuma alteração feita.\n";
    }

    arq.open("ex27_pet.txt", ios::in | ios::out | ios::app);
}

// Main
int main()
{
    setlocale(LC_ALL, "Portuguese");

    arq.open("ex27_pet.txt", ios::in | ios::out | ios::app);

    if (!arq.is_open())
    {
        arq.open("ex27_pet.txt", ios::out);
        arq.close();
        arq.open("ex27_pet.txt", ios::in | ios::out | ios::app);
    }

    if (!arq.is_open())
    {
        cout << "Erro crítico: Não foi possível abrir ou criar o arquivo de dados.\n";
        return 1;
    }

    int op;

    do
    {
        op = menu();

        switch (op)
        {
        case 1:
            cadastra();
            break;

        case 2:
            consulta();
            break;

        case 3:
            altera();
            break;

        case 4:
            cout << "Encerrando o sistema...\n";
            arq.close(); // Fecha o arquivo global ao sair
            break;

        default:
            cout << "Opção inválida!\n";
            break;
        }

    } while (op != 4);

    return 0;
}