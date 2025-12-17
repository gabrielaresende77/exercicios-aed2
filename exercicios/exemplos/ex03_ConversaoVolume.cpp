#include <iostream>
#include <locale.h>
using namespace std;

// Litro (L) para outras unidades
void litroParaOutras() {
    float litro;
    cout << "Digite o valor em litros: ";
    cin >> litro;
    
    cout << litro << " litro(s) = " << litro * 1000 << " mililitros" << endl;
    cout << litro << " litro(s) = " << litro * 1 << " decímetros cúbicos (dm³)" << endl;
    cout << litro << " litro(s) = " << litro * 1000 << " centímetros cúbicos (cm³)" << endl;
    cout << litro << " litro(s) = " << litro * 1000000 << " milímetros cúbicos (mm³)" << endl;
}

// Mililitro (mL) para outras unidades
void mililitroParaOutras() {
    float mililitro;
    cout << "Digite o valor em mililitros: ";
    cin >> mililitro;
    
    cout << mililitro << " mililitro(s) = " << mililitro / 1000 << " litro(s)" << endl;
    cout << mililitro << " mililitro(s) = " << mililitro / 1000 << " decímetros cúbicos (dm³)" << endl;
    cout << mililitro << " mililitro(s) = " << mililitro << " centímetros cúbicos (cm³)" << endl;
    cout << mililitro << " mililitro(s) = " << mililitro * 1000 << " milímetros cúbicos (mm³)" << endl;
}

// Decímetro cúbico (dm³) para outras unidades
void dm3ParaOutras() {
    float dm3;
    cout << "Digite o valor em decímetros cúbicos: ";
    cin >> dm3;
    
    cout << dm3 << " decímetro(s) cúbico(s) = " << dm3 << " litro(s)" << endl;
    cout << dm3 << " decímetro(s) cúbico(s) = " << dm3 * 1000 << " mililitros" << endl;
    cout << dm3 << " decímetro(s) cúbico(s) = " << dm3 * 1000 << " centímetros cúbicos (cm³)" << endl;
    cout << dm3 << " decímetro(s) cúbico(s) = " << dm3 * 1000000 << " milímetros cúbicos (mm³)" << endl;
}

// Centímetro cúbico (cm³) para outras unidades
void cm3ParaOutras() {
    float cm3;
    cout << "Digite o valor em centímetros cúbicos: ";
    cin >> cm3;
    
    cout << cm3 << " centímetro(s) cúbico(s) = " << cm3 / 1000 << " litro(s)" << endl;
    cout << cm3 << " centímetro(s) cúbico(s) = " << cm3 / 1000 << " mililitros" << endl;
    cout << cm3 << " centímetro(s) cúbico(s) = " << cm3 / 1000 << " decímetros cúbicos (dm³)" << endl;
    cout << cm3 << " centímetro(s) cúbico(s) = " << cm3 * 1000 << " milímetros cúbicos (mm³)" << endl;
}

// Milímetro cúbico (mm³) para outras unidades
void mm3ParaOutras() {
    float mm3;
    cout << "Digite o valor em milímetros cúbicos: ";
    cin >> mm3;
    
    cout << mm3 << " milímetro(s) cúbico(s) = " << mm3 / 1000000 << " litro(s)" << endl;
    cout << mm3 << " milímetro(s) cúbico(s) = " << mm3 / 1000 << " mililitros" << endl;
    cout << mm3 << " milímetro(s) cúbico(s) = " << mm3 / 1000000 << " decímetros cúbicos (dm³)" << endl;
    cout << mm3 << " milímetro(s) cúbico(s) = " << mm3 / 1000 << " centímetros cúbicos (cm³)" << endl;
}

// Menu principal
int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    cout << "Escolha a unidade base para conversão de volume:\n";
    cout << "1. Litro (L)\n2. Mililitro (mL)\n3. Decímetro cúbico (dm³)\n4. Centímetro cúbico (cm³)\n5. Milímetro cúbico (mm³)\n";
    cout << "Digite sua opção: ";
    cin >> opcao;

    switch(opcao) {
        case 1: litroParaOutras(); break;
        case 2: mililitroParaOutras(); break;
        case 3: dm3ParaOutras(); break;
        case 4: cm3ParaOutras(); break;
        case 5: mm3ParaOutras(); break;
        default: cout << "Opção inválida!" << endl;
    }

    return 0;
}