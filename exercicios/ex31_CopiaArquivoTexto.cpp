/*
Escreva um programa que leia, a partir do dispositivo de entrada padrão, os
nomes de dois arquivos e copie o conteúdo do primeiro arquivo para o segundo,
de modo que, ao final, o segundo arquivo seja uma cópia exata do primeiro.

Considere que os arquivos são arquivos-texto.

O programa deve testar se o arquivo de entrada existe e, caso não exista,
emitir uma mensagem apropriada no dispositivo padrão de erro.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    char nome1[100], nome2[100];

    cout << "Informe o nome do arquivo original: ";
    cin >> nome1;

    cout << "Informe o nome do arquivo que será a cópia: ";
    cin >> nome2;

    ifstream original(nome1);   // somente leitura
    ofstream copia(nome2);      // somente escrita

    if (!original.is_open())
    {
        cout << "Não foi possível abrir o arquivo original!!";
        return -1; // encerra o programa
    }

    if (!copia.is_open())
    {
        cout << "Não foi possível abrir o arquivo original!!";
        return -1; // encerra o programa
    }

    while (!original.eof())
    {
        string linha;
        getline(original, linha);
        copia << linha << endl;
    }

    original.close();
    copia.close();

    return 0;
}