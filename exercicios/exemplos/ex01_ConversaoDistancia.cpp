#include <iostream>
#include <locale.h>
using namespace std;

// Funções de conversão
void kmParaOutras() {
    float km;
    cout << "Digite o valor em quilômetros: ";
    cin >> km;
    
    cout << km << " km = " << km * 1000 << " metros" << endl;
    cout << km << " km = " << km * 10000 << " decâmetros" << endl;
    cout << km << " km = " << km * 100000 << " hectômetros" << endl;
    cout << km << " km = " << km * 1000000 << " centímetros" << endl;
    cout << km << " km = " << km * 10000000 << " milímetros" << endl;
}

void hmParaOutras() {
    float hm;
    cout << "Digite o valor em hectômetros: ";
    cin >> hm;
    
    cout << hm << " hm = " << hm * 100 << " metros" << endl;
    cout << hm << " hm = " << hm * 10 << " decâmetros" << endl;
    cout << hm << " hm = " << hm * 1000 << " centímetros" << endl;
    cout << hm << " hm = " << hm * 10000 << " milímetros" << endl;
}

void damParaOutras() {
    float dam;
    cout << "Digite o valor em decâmetros: ";
    cin >> dam;
    
    cout << dam << " dam = " << dam * 10 << " metros" << endl;
    cout << dam << " dam = " << dam * 100 << " centímetros" << endl;
    cout << dam << " dam = " << dam * 1000 << " milímetros" << endl;
}

void mParaOutras() {
    float m;
    cout << "Digite o valor em metros: ";
    cin >> m;
    
    cout << m << " m = " << m / 1000 << " quilômetros" << endl;
    cout << m << " m = " << m / 100 << " hectômetros" << endl;
    cout << m << " m = " << m / 10 << " decâmetros" << endl;
    cout << m << " m = " << m * 10 << " decímetros" << endl;
    cout << m << " m = " << m * 100 << " centímetros" << endl;
    cout << m << " m = " << m * 1000 << " milímetros" << endl;
}

void dmParaOutras() {
    float dm;
    cout << "Digite o valor em decímetros: ";
    cin >> dm;
    
    cout << dm << " dm = " << dm / 10 << " metros" << endl;
    cout << dm << " dm = " << dm / 100 << " decâmetros" << endl;
    cout << dm << " dm = " << dm / 1000 << " hectômetros" << endl;
    cout << dm << " dm = " << dm * 10 << " centímetros" << endl;
    cout << dm << " dm = " << dm * 100 << " milímetros" << endl;
}

void cmParaOutras() {
    float cm;
    cout << "Digite o valor em centímetros: ";
    cin >> cm;
    
    cout << cm << " cm = " << cm / 100 << " metros" << endl;
    cout << cm << " cm = " << cm / 1000 << " decâmetros" << endl;
    cout << cm << " cm = " << cm / 10000 << " hectômetros" << endl;
    cout << cm << " cm = " << cm / 10 << " decímetros" << endl;
    cout << cm << " cm = " << cm * 10 << " milímetros" << endl;
}

void mmParaOutras() {
    float mm;
    cout << "Digite o valor em milímetros: ";
    cin >> mm;
    
    cout << mm << " mm = " << mm / 1000 << " metros" << endl;
    cout << mm << " mm = " << mm / 10000 << " decâmetros" << endl;
    cout << mm << " mm = " << mm / 100000 << " hectômetros" << endl;
    cout << mm << " mm = " << mm / 100 << " decímetros" << endl;
    cout << mm << " mm = " << mm / 10 << " centímetros" << endl;
}

// Menu principal
int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    cout << "Escolha a unidade base:\n";
    cout << "1. Quilômetro (km)\n2. Hectômetro (hm)\n3. Decâmetro (dam)\n4. Metro (m)\n";
    cout << "5. Decímetro (dm)\n6. Centímetro (cm)\n7. Milímetro (mm)\n";
    cout << "Digite sua opção: ";
    cin >> opcao;

    switch(opcao) {
        case 1: kmParaOutras(); break;
        case 2: hmParaOutras(); break;
        case 3: damParaOutras(); break;
        case 4: mParaOutras(); break;
        case 5: dmParaOutras(); break;
        case 6: cmParaOutras(); break;
        case 7: mmParaOutras(); break;
        default: cout << "Opção inválida!" << endl;
    }

    return 0;
}