/*
Crie um programa que cadastre e salve o nome de 5 filmes em um arquivo.
Em seguida, substitua a vogal 'a' por 'i' em cada nome e imprima na tela todos
os nomes salvos no arquivo (já modificados).
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string substituirVogal(string s) {
    for (int i = 0; i < s.size(); i++) {
    	
        if (s[i] == 'a' || s[i] == 'A') {
            s[i] = 'i';
        }
    }
    return s;
}

int main() {
    string filmes[5];
    
    // Criação do arquivo
    ofstream arqOut("ex37_filmes.txt");

    cout << "Digite o nome de 5 filmes:\n";

    for (int i = 0; i < 5; i++) {
        getline(cin, filmes[i]);
        
        // Grava no arquivo imediatamente
        arqOut << filmes[i] << endl;
    }

    arqOut.close();

    // Leitura do arquivo
    ifstream arqIn("ex37_filmes.txt");

    if (!arqIn.is_open()) {
        cout << "Erro ao abrir arquivo!" << endl;
        return 1;
    }

    cout << "\n== Filmes com 'a' substituído por 'i' ==\n";
    string linha;

	// Enquanto houver linhas para ler
    while (getline(arqIn, linha)) {
    	
        linha = substituirVogal(linha);
        
        cout << linha << endl;
    }

    arqIn.close();

    return 0;
}