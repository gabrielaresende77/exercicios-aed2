/*
Crie um programa que:

1. Leia o gabarito de 10 questões (vetor de 10 caracteres).  
2. Leia as respostas de 5 alunos (matriz 5x10).  
3. Compare as respostas com o gabarito e armazene a pontuação de cada aluno
em um vetor.  
4. Exiba a pontuação de cada aluno.  

As respostas válidas são: 'a', 'b', 'c', 'd' (maiúsculas ou minúsculas).
*/

#include <iostream>
#include <cctype> // necessário para tolower
using namespace std;

int main() {
    char respostas[5][10];  // Respostas dos alunos
    char gabarito[10];      // Gabarito
    int resultados[5];      // Pontuação de cada aluno

    // Leitura do gabarito
    for(int quest = 0; quest < 10; quest++) {
        cout << "Informe a resposta correta da questão " << (quest + 1) << ": ";
        cin >> gabarito[quest];
        gabarito[quest] = tolower(gabarito[quest]); // tolower: converte uma letra maiúscula para minúscula

        while(gabarito[quest] != 'a' && gabarito[quest] != 'b' &&
              gabarito[quest] != 'c' && gabarito[quest] != 'd') {
            cout << "Opção inválida! Digite novamente: ";
            cin >> gabarito[quest];
            gabarito[quest] = tolower(gabarito[quest]);
        }
    }

    // Leitura das respostas dos alunos
    for(int aluno = 0; aluno < 5; aluno++) {
        cout << "\nAluno " << (aluno + 1) << endl;
        for(int quest = 0; quest < 10; quest++) {
            cout << "Resposta da questão " << (quest + 1) << ": ";
            cin >> respostas[aluno][quest];
            respostas[aluno][quest] = tolower(respostas[aluno][quest]);

            while(respostas[aluno][quest] != 'a' &&
                  respostas[aluno][quest] != 'b' &&
                  respostas[aluno][quest] != 'c' &&
                  respostas[aluno][quest] != 'd') {
                cout << "Opção inválida! Digite novamente: ";
                cin >> respostas[aluno][quest];
                respostas[aluno][quest] = tolower(respostas[aluno][quest]);
            }
        }
    }

    // Verificar acertos
    for(int aluno = 0; aluno < 5; aluno++) {
        int acertos = 0;
        for(int quest = 0; quest < 10; quest++) {
            if(respostas[aluno][quest] == gabarito[quest])
                acertos++;
        }
        resultados[aluno] = acertos;
        cout << "\nO aluno " << (aluno + 1) << " acertou " << acertos << " questões." << endl;
    }

    return 0;
}