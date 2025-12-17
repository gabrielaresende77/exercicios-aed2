/*
Exercício 3 – Biblioteca: Cadastro e Consulta

Crie uma struct Livro com os campos:

titulo
autor
ano
disponivel (bool)

Cadastre até 8 livros.

Crie uma função para pesquisar um livro por título (exata ou parcial).
     
Mostre se o livro está disponível para empréstimo ou não.
*/

#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int ano;
    bool disponivel;
};

// Função para pesquisar livros por título (total ou parcial)
void pesquisarLivro(Livro livros[], int tamanho, string busca) {
    bool encontrado = false;

    for (int i = 0; i < tamanho; i++) {
        // Verifica correspondência parcial usando find()
        // string::npos é o valor retornado quando o texto NÃO é achado.
        // Se for DIFERENTE de npos, significa que encontrou a busca dentro do título.
        if (livros[i].titulo.find(busca) != string::npos) {
            encontrado = true;

            cout << "\n--- LIVRO ENCONTRADO ---\n";
            cout << "Titulo: " << livros[i].titulo << endl;
            cout << "Autor: " << livros[i].autor << endl;
            cout << "Ano: " << livros[i].ano << endl;
            // Operador ternário: (condição ? valor_se_verdadeiro : valor_se_falso)
            cout << "Disponivel: " << (livros[i].disponivel ? "Sim" : "Nao") << endl;
        }
    }

    if (!encontrado) {
        cout << "\nNenhum livro correspondente encontrado.\n";
    }
}

int main() {
    Livro livros[8];
    int qtd;

    cout << "Quantos livros deseja cadastrar? (até 8): ";
    cin >> qtd;

    if (qtd > 8) qtd = 8;

    cin.ignore(); // limpar buffer antes de getline

    // Cadastro
    for (int i = 0; i < qtd; i++) {
        cout << "\n=== Cadastro do livro " << i + 1 << " ===\n";
        
        cout << "Titulo: ";
        getline(cin, livros[i].titulo);

        cout << "Autor: ";
        getline(cin, livros[i].autor);

        cout << "Ano: ";
        cin >> livros[i].ano;

        cout << "Disponivel (1 = sim, 0 = nao): ";
        cin >> livros[i].disponivel;

        cin.ignore(); // limpar Enter restante
    }

    // Pesquisa
    string termo;
    cout << "\nDigite um título (total ou parcial) para pesquisar: ";
    getline(cin, termo);

    pesquisarLivro(livros, qtd, termo);

    return 0;
}