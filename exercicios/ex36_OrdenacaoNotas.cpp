/*
Em uma competição, os juízes registraram as notas de 20 participantes. Faça um
programa que:

1. Armazene as 20 notas (inteiras).
2. Ordene as notas em ordem decrescente (do maior para o menor).
3. Exiba os 5 primeiros colocados (as 5 maiores notas).
*/

#include <iostream>
using namespace std;

// Função Bubble Sort Adaptada para DECRESCENTE (Maior -> Menor)
void BubbleSortDecrescente(int notas[], int n) {
	// Loop externo: controla as passadas
    for (int i = 0; i < n - 1; i++) {
    	
    	// Loop interno: compara pares adjacentes
        for (int j = 0; j < n - 1 - i; j++) {
        	
        	// A DIFERENÇA ESTÁ AQUI:
            // Usamos '<' (menor que) em vez de '>' (maior que).
            // Lógica: "Se o atual for MENOR que o próximo, jogue-o para o final".
            // Isso faz com que os números pequenos "afundem" e os grandes "subam" para o início.
            if (notas[j] < notas[j + 1]) {
            	
            	// Troca manual (poderia usar swap(notas[j], notas[j+1]))
                int temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int notas[20];

	// 1. Entrada de dados
    for (int i = 0; i < 20; i++) {
        cout << "Informe a nota do participante " << (i + 1) << ": ";
        cin >> notas[i];
    }

	// 2. Processamento (Ordenação)
    // Após essa linha, o vetor estará organizado do Maior para o Menor.
    // Ex: {10, 9, 8, 7, ... 1}
    BubbleSortDecrescente(notas, 20);

	// 3. Saída (Top 5)
    cout << "\n5 primeiros colocados:\n";
    
    // O loop roda apenas até 5 (i < 5), pegando os índices 0, 1, 2, 3 e 4.
    // Como o vetor está em ordem decrescente, esses são garantidamente os maiores valores.
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << " - " << notas[i] << endl;
    }

    return 0;
}