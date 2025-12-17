/*
Crie um programa em C++ com funções para calcular a área e o perímetro das seguintes figuras geométricas:
Quadrado
Retângulo
Triângulo
Círculo
Trapézio
Losango
Paralelogramo

O programa deve:
Solicitar os valores necessários (lados, altura, raios, diagonais, etc.) para
cada figura.
Calcular e exibir a área e o perímetro da figura correspondente.
*/

#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

// Quadrado
void quadrado() {
    float lado;
    cout << "Digite o valor do lado do quadrado: ";
    cin >> lado;
    
    float area = lado * lado;
    float perimetro = 4 * lado;
    
    cout << "Área do quadrado: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do quadrado: " << perimetro << " unidades" << endl;
}

// Retângulo
void retangulo() {
    float comprimento, largura;
    cout << "Digite o comprimento do retângulo: ";
    cin >> comprimento;
    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    
    float area = comprimento * largura;
    float perimetro = 2 * (comprimento + largura);
    
    cout << "Área do retângulo: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do retângulo: " << perimetro << " unidades" << endl;
}

// Triângulo
void triangulo() {
    float base, altura, lado1, lado2, lado3;
    cout << "Digite a base do triângulo: ";
    cin >> base;
    cout << "Digite a altura do triângulo: ";
    cin >> altura;
    cout << "Digite os três lados do triângulo (lado1, lado2, lado3): ";
    cin >> lado1 >> lado2 >> lado3;
    
    float area = (base * altura) / 2;
    float perimetro = lado1 + lado2 + lado3;
    
    cout << "Área do triângulo: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do triângulo: " << perimetro << " unidades" << endl;
}

// Círculo
void circulo() {
    float raio;
    cout << "Digite o valor do raio do círculo: ";
    cin >> raio;
    
    float area = M_PI * raio * raio;
    float perimetro = 2 * M_PI * raio;
    
    cout << "Área do círculo: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do círculo: " << perimetro << " unidades" << endl;
}

// Trapézio
void trapezio() {
    float baseMaior, baseMenor, altura, lado1, lado2;
    cout << "Digite a base maior do trapézio: ";
    cin >> baseMaior;
    cout << "Digite a base menor do trapézio: ";
    cin >> baseMenor;
    cout << "Digite a altura do trapézio: ";
    cin >> altura;
    cout << "Digite os lados não paralelos do trapézio: ";
    cin >> lado1 >> lado2;
    
    float area = ((baseMaior + baseMenor) * altura) / 2;
    float perimetro = baseMaior + baseMenor + lado1 + lado2;
    
    cout << "Área do trapézio: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do trapézio: " << perimetro << " unidades" << endl;
}

// Losango
void losango() {
    float diagonalMaior, diagonalMenor, lado;
    cout << "Digite a diagonal maior do losango: ";
    cin >> diagonalMaior;
    cout << "Digite a diagonal menor do losango: ";
    cin >> diagonalMenor;
    cout << "Digite o valor do lado do losango: ";
    cin >> lado;
    
    float area = (diagonalMaior * diagonalMenor) / 2;
    float perimetro = 4 * lado;
    
    cout << "Área do losango: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do losango: " << perimetro << " unidades" << endl;
}

// Paralelogramo
void paralelogramo() {
    float base, altura, lado;
    cout << "Digite a base do paralelogramo: ";
    cin >> base;
    cout << "Digite a altura do paralelogramo: ";
    cin >> altura;
    cout << "Digite o valor do lado do paralelogramo: ";
    cin >> lado;
    
    float area = base * altura;
    float perimetro = 2 * (base + lado);
    
    cout << "Área do paralelogramo: " << area << " unidades quadradas" << endl;
    cout << "Perímetro do paralelogramo: " << perimetro << " unidades" << endl;
}

// Função principal com menu
int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    cout << "Escolha a figura para calcular área e perímetro:\n";
    cout << "1. Quadrado\n2. Retangulo\n3. Triangulo\n4. Circulo\n5. Trapezio\n6. Losango\n7. Paralelogramo\n";
    cout << "Digite sua opção: ";
    cin >> opcao;

    switch(opcao) {
        case 1: quadrado(); break;
        case 2: retangulo(); break;
        case 3: triangulo(); break;
        case 4: circulo(); break;
        case 5: trapezio(); break;
        case 6: losango(); break;
        case 7: paralelogramo(); break;
        default: cout << "Opcao invalida!" << endl;
    }

    return 0;
}