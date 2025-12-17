#include <iostream>
#include <locale.h>
using namespace std;

// Hora para outras unidades
void horaParaOutras() {
    float hora;
    cout << "Digite o valor em horas: ";
    cin >> hora;
    
    cout << hora << " hora(s) = " << hora * 60 << " minutos" << endl;
    cout << hora << " hora(s) = " << hora * 3600 << " segundos" << endl;
    cout << hora << " hora(s) = " << hora * 3600000 << " milésimos de segundo" << endl;
}

// Minuto para outras unidades
void minutoParaOutras() {
    float minuto;
    cout << "Digite o valor em minutos: ";
    cin >> minuto;
    
    cout << minuto << " minuto(s) = " << minuto / 60 << " hora(s)" << endl;
    cout << minuto << " minuto(s) = " << minuto * 60 << " segundos" << endl;
    cout << minuto << " minuto(s) = " << minuto * 60000 << " milésimos de segundo" << endl;
}

// Segundo para outras unidades
void segundoParaOutras() {
    float segundo;
    cout << "Digite o valor em segundos: ";
    cin >> segundo;
    
    cout << segundo << " segundo(s) = " << segundo / 3600 << " hora(s)" << endl;
    cout << segundo << " segundo(s) = " << segundo / 60 << " minuto(s)" << endl;
    cout << segundo << " segundo(s) = " << segundo * 1000 << " milésimos de segundo" << endl;
}

// Milésimo de segundo para outras unidades
void milesimoDeSegundoParaOutras() {
    float milisegundo;
    cout << "Digite o valor em milésimos de segundo: ";
    cin >> milisegundo;
    
    cout << milisegundo << " milésimo(s) de segundo = " << milisegundo / 3600000 << " hora(s)" << endl;
    cout << milisegundo << " milésimo(s) de segundo = " << milisegundo / 60000 << " minuto(s)" << endl;
    cout << milisegundo << " milésimo(s) de segundo = " << milisegundo / 1000 << " segundo(s)" << endl;
}

// Menu principal
int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    cout << "Escolha a unidade base para conversão de tempo:\n";
    cout << "1. Hora\n2. Minuto\n3. Segundo\n4. Milésimo de segundo\n";
    cout << "Digite sua opção: ";
    cin >> opcao;

    switch(opcao) {
        case 1: horaParaOutras(); break;
        case 2: minutoParaOutras(); break;
        case 3: segundoParaOutras(); break;
        case 4: milesimoDeSegundoParaOutras(); break;
        default: cout << "Opção inválida!" << endl;
    }

    return 0;
}