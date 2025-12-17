/*
Crie um programa que receba do usuário o nome de um arquivo texto e exiba na
tela a quantidade de vogais e consoantes presentes no conteúdo do arquivo.
*/

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    int contc = 0, contv = 0;
    string nome;
    char aux;

    cout << "Nome do arquivo: ";
    getline(cin, nome);

    ifstream dados(nome.c_str());

    if (dados.is_open())
    {
        while (dados.get(aux)) // Pega caractere por caractere
        {
            if (isalpha(aux)) // Verifica se é letra
            {
                aux = tolower(aux); // Converte para minúscula

                if (aux == 'a' || aux == 'e' || aux == 'i' || aux == 'o' || aux == 'u')
                    contv++;
                else
                    contc++;
            }
        }

        cout << "O arquivo tem " << contv << " vogais e " << contc << " consoantes.";
        dados.close();
    }
    else
    {
        cout << "Arquivo inexistente ou corrompido!!";
    }

    return 0;
}