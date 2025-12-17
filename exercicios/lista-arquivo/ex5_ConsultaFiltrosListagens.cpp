/*
Exercício 5 – Filtros e listagens

Crie um sistema para cadastrar até 20 consultas com os campos: paciente, data, horário e status.

O sistema deve permitir:
-Cadastrar consultas;
-Listar todas as consultas de uma data específica (informada pelo usuário);
-Listar todas as consultas com status “Agendada”.

*Utilize struct, vetor e funções.
*/

#include <iostream>
#include <string>

using namespace std;

struct Consulta {
    string paciente;
    string data;
    string horario;
    string status;
};

// Cadastrar consultas
void cadastrarConsulta(Consulta lista[], int &qtd) {
    if (qtd >= 20) {
        cout << "\nErro: Limite de 20 consultas atingido!\n";
        return;
    }

    cout << "\n--- Nova Consulta (" << qtd + 1 << "/20) ---\n";
    cin.ignore(); // Limpa buffer antes de começar a ler strings

    cout << "Nome do Paciente: ";
    getline(cin, lista[qtd].paciente);

    cout << "Data (DD/MM/AAAA): ";
    getline(cin, lista[qtd].data);

    cout << "Horario (HH:MM): ";
    getline(cin, lista[qtd].horario);

    cout << "Status (Agendada/Cancelada/Realizada): ";
    getline(cin, lista[qtd].status);

    qtd++; // Incrementa o contador total de consultas
    cout << ">> Consulta cadastrada com sucesso!\n";
}

// Listar todas as consultas de uma data específica
void listarPorData(Consulta lista[], int qtd) {
    string dataBusca;
    bool encontrou = false;

    cin.ignore();
    cout << "\nDigite a data para busca (DD/MM/AAAA): ";
    getline(cin, dataBusca);

    cout << "\n=== Consultas do dia " << dataBusca << " ===\n";

    for (int i = 0; i < qtd; i++) {
        if (lista[i].data == dataBusca) {
            cout << "Paciente: " << lista[i].paciente << " | ";
            cout << "Horario: " << lista[i].horario << " | ";
            cout << "Status: " << lista[i].status << endl;
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhuma consulta encontrada para esta data.\n";
    }
}

// Listar todas as consultas com status "Agendada"
void listarAgendadas(Consulta lista[], int qtd) {
    bool encontrou = false;

    cout << "\n=== Todas as Consultas AGENDADAS ===\n";

    for (int i = 0; i < qtd; i++) {
        // Verifica se o status é "Agendada" (ou "agendada" minúsculo para garantir)
        if (lista[i].status == "Agendada" || lista[i].status == "agendada") {
            cout << "Data: " << lista[i].data << " | ";
            cout << "Horario: " << lista[i].horario << " | ";
            cout << "Paciente: " << lista[i].paciente << endl;
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhuma consulta agendada no momento.\n";
    }
}

// Main (Menu Principal)
int main() {
    Consulta consultas[3]; // Vetor para até 20 consultas
    int quantidade = 0;     // Controla quantas consultas já foram cadastradas
    int opcao;

    do {
        cout << "\n======= CLINICA MEDICA =======\n";
        cout << "1. Cadastrar Consulta\n";
        cout << "2. Buscar por Data\n";
        cout << "3. Listar Agendadas\n";
        cout << "4. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarConsulta(consultas, quantidade);
                break;
            case 2:
                if (quantidade == 0) cout << "Nenhuma consulta cadastrada.\n";
                else listarPorData(consultas, quantidade);
                break;
            case 3:
                if (quantidade == 0) cout << "Nenhuma consulta cadastrada.\n";
                else listarAgendadas(consultas, quantidade);
                break;
            case 4:
                cout << "Encerrando sistema...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 4);

    return 0;
}