/*
Em uma competição, os juízes registraram as notas de 20 participantes. Faça um
programa que:

1. Armazene as 20 notas (inteiras).
2. Ordene as notas em ordem decrescente (do maior para o menor).
3. Exiba os 5 primeiros colocados (as 5 maiores notas).
*/

#include <iostream>
#include <algorithm> // Boa prática: incluir para usar a função swap()
using namespace std;

// Função de Ordenação (Bubble Sort Decrescente)
void ordemDecrescente(int notas[], int tam)
{
	// Loop externo: controla as passadas pelo vetor
    for (int i = 0; i < tam; i++)
    {
    	// Loop interno: compara elementos adjacentes
        for (int j = 0; j < tam - 1; j++)
        {
        	// LÓGICA DECRESCENTE:
            // Se o elemento atual for MENOR (<) que o próximo, trocamos.
            // Isso empurra os números pequenos para o final e traz os grandes para o início.
            if (notas[j] < notas[j + 1])
                swap(notas[j], notas[j + 1]); // Troca de posição
        }
    }
}

int main()
{
    int notas[20], copia[20];

    for (int i = 0; i < 20; i++)
    {
        cout << "Informe a nota do participante " << (i + 1) << ": ";
        cin >> notas[i];
        
        // ESTRATÉGIA DE CÓPIA:
        // Enquanto lemos os dados, já criamos uma cópia num segundo vetor.
        // Assim, 'notas' mantém a ordem de entrada (original) e 'copia' será ordenado.
        copia[i] = notas[i];
    }

	// Ordenamos apenas o vetor 'copia'
    ordemDecrescente(copia, 20);

    cout << "\nTop 5 notas:\n";
    
    // EXIBIÇÃO PARCIAL:
    // Como o vetor está ordenado do maior para o menor,
    // basta imprimir os índices de 0 a 4 para ter o Top 5.
    for (int i = 0; i < 5; i++)
        cout << copia[i] << endl;

    return 0;
}