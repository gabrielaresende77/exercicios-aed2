#include <iostream>
#include <vector>
using namespace std;

// Função que troca a posição de dois números
void trocar(int &a, int &b) {
    int temp = a; // Guarda o valor de 'a' em temporário
    a = b;        // Coloca o valor de 'b' em 'a'
    b = temp;     // Coloca o valor antigo de 'a' em 'b'
}

// Função que ordena os números de um vetor usando Bubble Sort
void bubbleSort(vector<int>& arr) {
    bool trocou;        // Variável para verificar se houve troca
    int n = arr.size(); // Tamanho do vetor

    // Loop externo percorre o vetor várias vezes
    for (int i = 0; i < n - 1; i++) {
        trocou = false; // Nenhuma troca no início da passagem

        // Loop interno compara elementos adjacentes
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Se fora de ordem, troca
                trocar(arr[j], arr[j + 1]);
                trocou = true; // Marcamos que houve troca
            }
        }

        // Se não houve troca, o vetor já está ordenado
        if (!trocou)
            break;
    }
}

// Função para exibir os números na tela
void exibirArray(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {     // Percorre o vetor usando índice
        cout << arr[i] << " ";        // Exibe cada elemento
    }
    cout << endl;                      // Quebra de linha ao final
}

int main() {
    int tamanho; // Tamanho do vetor

    cout << "Digite o tamanho do array: "; // Solicita o tamanho
    cin >> tamanho;

    vector<int> array(tamanho); // Cria vetor de tamanho informado
    cout << "Digite " << tamanho << " elementos:\n";

    // Leitura dos elementos do usuário
    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }

    cout << "Array original: ";
    exibirArray(array); // Mostra array antes da ordenação

    bubbleSort(array);  // Ordena o vetor

    cout << "Array ordenado: ";
    exibirArray(array); // Mostra array depois da ordenação

    return 0;
}