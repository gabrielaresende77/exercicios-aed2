/*
Faça um programa que receba como entrada o ano corrente e o nome de dois
arquivos: um de entrada e outro de saída.
Cada linha do arquivo de entrada contém o nome de uma pessoa (ocupando 40
caracteres) e o seu ano de nascimento.

O programa deverá ler o arquivo de entrada e gerar um arquivo de saída onde
apareçam o nome da pessoa seguido de uma string que representa a sua idade,
conforme as regras:

- Se a idade for menor que 18 anos, escreva: "menor de idade".
- Se a idade for maior que 18 anos, escreva: "maior de idade".
- Se a idade for igual a 18 anos, escreva: "entrando na maior idade".
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    char nome1[100], nome2[100];
    int anoatual;

    cout << "Informe o nome do arquivo a ser lido: ";
    cin >> nome1;

    cout << "Informe o nome do arquivo a ser gerado: ";
    cin >> nome2;

    cout << "Qual ano atual? ";
    cin >> anoatual;

	// Leitura (input)
    ifstream arq1(nome1);
    
    // Escrita (output)
    ofstream arq2(nome2);

    if (!arq1.is_open())
    {
        cout << "Erro ao abrir arquivo";
        return 1;
    }

    if (!arq2.is_open())
    {
        cout << "Erro ao abrir arquivo";
        return 1;
    }

    int idade, ano;
    string nome;

    while (!arq1.eof())
    {
        getline(arq1, nome, ';');
        
        arq1 >> ano;

        if(arq1.fail()) break; 
        
        idade = anoatual - ano;

        arq2 << nome << ";";

        if (idade > 18)
            arq2 << "maior idade";
        else
            if (idade == 18)
                arq2 << "entrando na maior idade";
            else
                arq2 << "menor idade";
   
        arq2 << endl; 
    }

    arq1.close();
    arq2.close();

    cout << "Arquivo gerado com sucesso!!";

    return 0;
}