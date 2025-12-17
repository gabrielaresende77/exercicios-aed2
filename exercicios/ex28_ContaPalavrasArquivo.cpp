/*
Crie um programa que solicite ao usuário o nome de um arquivo de texto e uma
palavra, e retorne quantas vezes essa palavra aparece no arquivo.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nome, palavra, linha;

    cout << "Nome do arquivo: ";
    getline(cin, nome);

    cout << "Qual palavra deseja consultar? ";
    cin >> palavra;

	// .c_str() -> Converte a string do C++ para o estilo C (char array)
    ifstream arq(nome.c_str());

    if (arq.is_open())
    {
        int cont = 0;

        while (!arq.eof())
        {
            getline(arq, linha);

            while (linha.find(palavra) != -1)
            {
                cont++;
                
                linha = linha.substr(linha.find(palavra) + 1);
            }
        }

        cout << "A palavra foi encontrada " << cont << " vezes";
        arq.close();
    }
    else
    {
        cout << "Arquivo não existente.";
    }

    return 0;
}