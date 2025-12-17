/*
Exercício 6 – Cadastro com gravação e leitura

Desenvolva um programa para uma biblioteca, que:
-Cadastre até 50 livros com os campos: título, autor, ano e disponível (sim/não).
-Grave os dados em um arquivo chamado livros.txt.
-Ao iniciar o programa, leia os dados do arquivo e permita:
 -Listar todos os livros disponíveis;
 -Cadastrar novos livros;
 -Atualizar o status (emprestado ou disponível);
 -Salvar as alterações no arquivo.

*Utilize struct, vetor, funções, e operações de leitura e escrita em arquivos.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Livro {
    string titulo;
    string autor;
    int ano;
    bool disponivel;
};

void salvarDados(Livro vet[], int qtd);
void carregarDados(Livro vet[], int &qtd);
void cadastrarLivro(Livro vet[], int &qtd);
void listarDisponiveis(Livro vet[], int qtd);
void atualizarStatus(Livro vet[], int qtd);

// Main
int main() {
    Livro biblioteca[50];
    int totalLivros = 0;
    int opcao;

    // Carregar os dados do arquivo para a memória ao iniciar
    carregarDados(biblioteca, totalLivros);

    do {
        cout << "\n=== BIBLIOTECA (" << totalLivros << " livros) ===\n";
        cout << "1. Cadastrar Livro\n";
        cout << "2. Listar Disponiveis\n";
        cout << "3. Atualizar Status\n";
        cout << "4. Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: cadastrarLivro(biblioteca, totalLivros); break;
            case 2: listarDisponiveis(biblioteca, totalLivros); break;
            case 3: atualizarStatus(biblioteca, totalLivros); break;
            case 4: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while (opcao != 4);

    return 0;
}

// Função: SALVAR ARQUIVO
void salvarDados(Livro vet[], int qtd) {
    ofstream arq("ex6_livros.txt"); // Abre limpando o arquivo (sobrescreve)

    if (!arq.is_open()) {
        cout << "Erro ao salvar o arquivo!\n";
        return;
    }

    for (int i = 0; i < qtd; i++) {
        // Grava: Titulo;Autor;Ano;Disponivel(1 ou 0)
        arq << vet[i].titulo << ";"
            << vet[i].autor << ";"
            << vet[i].ano << ";"
            << vet[i].disponivel << endl;
    }
    arq.close();
}

// Função: CARREGAR ARQUIVO
void carregarDados(Livro vet[], int &qtd) {
    ifstream arq("ex6_livros.txt");
    qtd = 0; // Começa do zero

    if (!arq.is_open()) return; // Se arquivo não existe, apenas retorna (primeira execução)

    // Enquanto conseguir ler o título até o ';'
    while (getline(arq, vet[qtd].titulo, ';')) {
        
        // Lê Autor
        getline(arq, vet[qtd].autor, ';');
        
        // Lê Ano
        arq >> vet[qtd].ano;
        arq.ignore(); // Pula o ';' depois do ano

        // Lê Disponibilidade (0 ou 1)
        arq >> vet[qtd].disponivel;
        arq.ignore(); // Pula o '\n' (enter) final da linha

        qtd++; // Vai para o próximo índice do vetor
    }
    arq.close();
}

// Função: CADASTRAR LIVRO
void cadastrarLivro(Livro vet[], int &qtd) {
    if (qtd >= 50) {
        cout << "Biblioteca cheia!\n";
        return;
    }

    cin.ignore(); // Limpa buffer do menu
    cout << "\n--- Novo Livro ---\n";
    
    cout << "Titulo: ";
    getline(cin, vet[qtd].titulo);

    cout << "Autor: ";
    getline(cin, vet[qtd].autor);

    cout << "Ano: ";
    cin >> vet[qtd].ano;
    
    // Todo livro novo começa como Disponível (true)
    vet[qtd].disponivel = true;

    qtd++; // Aumenta contagem
    
    // Salva imediatamente no arquivo
    salvarDados(vet, qtd);
    cout << "Livro cadastrado e salvo com sucesso!\n";
}

// Função: LISTAR DISPONÍVEIS
void listarDisponiveis(Livro vet[], int qtd) {
    cout << "\n=== Livros Disponiveis ===\n";
    bool achou = false;

    for (int i = 0; i < qtd; i++) {
        // Só mostra se disponivel for 'true'
        if (vet[i].disponivel == true) {
            cout << "Titulo: " << vet[i].titulo << " | ";
            cout << "Autor: " << vet[i].autor << " | ";
            cout << "Ano: " << vet[i].ano << endl;
            achou = true;
        }
    }

    if (!achou) cout << "Nenhum livro disponivel no momento.\n";
}

// Função: ATUALIZAR STATUS
void atualizarStatus(Livro vet[], int qtd) {
    string busca;
    cin.ignore();
    cout << "\nDigite o titulo do livro para alterar status: ";
    getline(cin, busca);

    bool achou = false;
    for (int i = 0; i < qtd; i++) {
        // Se encontrar o título
        if (vet[i].titulo == busca) {
            achou = true;
            
            // Inverte o valor: Se era true vira false, se era false vira true
            vet[i].disponivel = !vet[i].disponivel;

            cout << "Status atualizado para: " 
                 << (vet[i].disponivel ? "DISPONIVEL" : "EMPRESTADO") << endl;
            
            // Salva a alteração no arquivo
            salvarDados(vet, qtd);
            break; // Sai do loop pois já achou
        }
    }

    if (!achou) cout << "Livro nao encontrado!\n";
}