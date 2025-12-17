/*
Exercício 4 – Atualização de dados em vetor

Crie um sistema simples de cadastro de pacientes com os campos: nome, CPF e idade.
-Permita cadastrar até 30 pacientes.
-Após o cadastro, possibilite atualizar a idade de um paciente, buscando pelo CPF.
-Mostre todos os dados atualizados.

*Utilize funções para buscar e atualizar dados no vetor.
*/

#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nome;
    string cpf;
    int idade;
};

// Função para buscar paciente pelo CPF
int buscarPorCPF(Paciente vet[], int qtd, string cpfBuscado) {
    for (int i = 0; i < qtd; i++) {
        if (vet[i].cpf == cpfBuscado) {
            return i; // retorna índice do paciente
        }
    }
    return -1; // não encontrado
}

// Função para atualizar idade do paciente
void atualizarIdadePaciente(Paciente vet[], int qtd) {
    string cpfBusca;
    int indice;
    char opcao;
    
    // Loop do-while permite tentar novamente se errar o CPF
    do {
        cout << "\nDigite o CPF do paciente para atualizar a idade: ";
        getline(cin, cpfBusca);
        
        // Chama a função de busca para descobrir ONDE está o paciente
        indice = buscarPorCPF(vet, qtd, cpfBusca);
        
        if (indice == -1) {
            cout << "Paciente nao encontrado!\n";
            cout << "Deseja tentar novamente? (S/N): ";
            cin >> opcao;
            cin.ignore();
            
            if (opcao == 'N' || opcao == 'n') {
                return; // Sai da função se usuário não quiser tentar novamente
            }
        }
    } while (indice == -1);
    
    // Paciente encontrado
    cout << "\nPaciente encontrado:\n";
    cout << "Nome: " << vet[indice].nome << endl;
    cout << "CPF: " << vet[indice].cpf << endl;
    cout << "Idade atual: " << vet[indice].idade << " anos\n";
    
    int novaIdade;
    cout << "\nDigite a nova idade: ";
    cin >> novaIdade;
    cin.ignore();
    
    // Atualiza diretamente na posição encontrada
    vet[indice].idade = novaIdade;
    cout << "Idade atualizada com sucesso!\n";
}

int main() {
    Paciente pacientes[30];
    int qtd;
    
    cout << "Quantos pacientes deseja cadastrar (max 30)? ";
    cin >> qtd;
    cin.ignore(); // limpar buffer
    
    if (qtd > 30) qtd = 30;
    
    if (qtd < 1) {
		cout << "Quantidade invalida. Encerrando.\n";
        return 0;
    }
    
    // Cadastro
    for (int i = 0; i < qtd; i++) {
        cout << "\nPaciente " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, pacientes[i].nome);
        cout << "CPF: ";
        getline(cin, pacientes[i].cpf);
        cout << "Idade: ";
        cin >> pacientes[i].idade;
        cin.ignore();
    }
    
    cout << "\nCadastro concluido com sucesso!\n";
    
    // Opção de atualizar idade
    char desejaAtualizar;
    cout << "\nDeseja atualizar a idade de algum paciente? (S/N): ";
    cin >> desejaAtualizar;
    cin.ignore();
    
    if (desejaAtualizar == 'S' || desejaAtualizar == 's') {
        atualizarIdadePaciente(pacientes, qtd);
    }
    
    // Exibir dados atualizados
    cout << "\n--- Lista de Pacientes ---\n";
    for (int i = 0; i < qtd; i++) {
        cout << "Nome: " << pacientes[i].nome << endl;
        cout << "CPF: " << pacientes[i].cpf << endl;
        cout << "Idade: " << pacientes[i].idade << "\n\n";
    }
    
    return 0;
}