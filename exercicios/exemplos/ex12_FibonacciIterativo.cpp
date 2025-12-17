#include <iostream>
#include <locale.h>
using namespace std;

// Função que imprime os primeiros 'n' números da sequência de Fibonacci
void fibonacciIterativo(int n) {
    long long primeiro = 0; // Primeiro número da sequência (0)
    long long segundo = 1;  // Segundo número da sequência (1)
    long long proximo;      // Variável para o próximo número da sequência

    cout << "Sequência de Fibonacci até o " << n << "º termo:\n";

    if (n >= 1) {
        cout << primeiro << " ";
    }
    if (n >= 2) {
        cout << segundo << " ";
    }
    for (int i = 3; i <= n; i++) {
        proximo = primeiro + segundo; // Próximo número = soma dos dois anteriores
        cout << proximo << " ";
        primeiro = segundo; // Atualizamos o valor de "primeiro" para o próximo cálculo
        segundo = proximo;  // Atualizamos o valor de "segundo"
    }
    cout << endl; // Quebra de linha ao final
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n;
    cout << "Digite quantos termos da sequência de Fibonacci deseja exibir: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor, insira um número positivo." << endl;
    } else {
        fibonacciIterativo(n); // Exibe a sequência de Fibonacci com 'n' termos
    }

    return 0;
}
