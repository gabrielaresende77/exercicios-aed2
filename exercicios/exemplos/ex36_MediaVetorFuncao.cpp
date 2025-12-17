#include <iostream>
#include <vector>     // Para usar "vector"
using namespace std;

// Função para calcular a média de um vetor de números
float calcularMedia(const vector<int>& arr) {
    int soma = 0; // Inicializa a soma dos elementos

    // Loop para somar todos os elementos do vetor
    for (int i = 0; i < arr.size(); i++) {
        soma += arr[i]; // Adiciona o elemento atual à soma
    }

    return static_cast<float>(soma) / arr.size(); // Retorna a média
}

int main() {
    int n;

    // Solicita ao usuário o número de elementos
    cout << "Digite o número de elementos no vetor: ";
    cin >> n;
	
    vector<int> arr(n); // Cria o vetor com o tamanho fornecido pelo usuário

    // Solicita ao usuário os valores para preencher o vetor
    cout << "Digite os " << n << " elementos do vetor: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Preenche o vetor com os valores fornecidos
    }

    // Exibe a média calculada
    cout << "A média dos elementos do vetor é: " << calcularMedia(arr) << endl;

    return 0;
}