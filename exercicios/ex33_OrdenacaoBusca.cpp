/*
Crie um programa em C++ que realize as seguintes tarefas:

1. Criar um vetor contendo 20 números inteiros gerados aleatoriamente.
2. Ordenar esse vetor utilizando Bubble Sort ou Quick Sort.
3. Implementar busca sequencial e busca binária no vetor já ordenado.
4. Exibir na tela:
	- O vetor original
	- O vetor ordenado
	- O resultado das buscas
*/

#include <iostream>
#include <algorithm> // Função swap()
using namespace std;

// ALGORITMO BUBBLE SORT (O(n^2))
// Percorre o vetor várias vezes, flutuando o maior valor para o final.
void bubbleSort(int vet[], int tam)
{
	// Loop externo: controla o número de passadas
    for(int i = 0; i < tam; i++)
    {
    	// Loop interno: compara pares adjacentes
    	// 'tam - 1' evita acessar posição inválida (j+1)
        for(int j = 0; j < tam - 1; j++)
        {
        	// Se o atual for maior que o próximo, troca (ordem crescente)
            if(vet[j] > vet[j + 1])
                swap(vet[j], vet[j + 1]);
        }
    }
}

// ALGORITMO QUICK SORT (O(n log n))
// Estratégia "Dividir para Conquistar".

// Função auxiliar que organiza os elementos em torno de um pivô
int particiona(int vet[], int inicio, int fim)
{
    int pivo = vet[fim]; // Escolhe o último elemento como pivô
    int i = inicio - 1; // Índice do menor elemento

	// Percorre o sub-vetor
    for(int j = inicio; j < fim; j++)
    {
    	// Se o elemento atual for menor que o pivô, joga para a esquerda (i)
        if(vet[j] < pivo)
        {
            i++;
            swap(vet[i], vet[j]);
        }
    }
    // Coloca o pivô na sua posição final correta (entre os menores e maiores)
    swap(vet[i + 1], vet[fim]);
    return i + 1; // Retorna a posição onde o pivô ficou
}

// Função principal recursiva do Quick Sort
void quickSort(int vet[], int inicio, int fim)
{
    if(inicio < fim)
    {
    	// Encontra a posição de partição
        int pi = particiona(vet, inicio, fim);
        
        // Ordena recursivamente os elementos antes e depois da partição
        quickSort(vet, inicio, pi - 1);
        quickSort(vet, pi + 1, fim);
    }
}

// BUSCA SEQUENCIAL (O(n))
// Funciona em vetores ordenados ou desordenados.
int buscaSequencial(int vet[], int tam, int chave)
{
	// Percorre cada elemento um por um
    for(int i = 0; i < tam; i++)
    {
        if(vet[i] == chave)
            return i; // Retorna o índice se encontrar
    }
    return -1; // Retorna -1 se percorrer tudo e não achar
}

// BUSCA BINÁRIA (O(log n))
// EXIGE que o vetor esteja ORDENADO para funcionar.
int buscaBinaria(int vet[], int inicio, int fim, int chave)
{
    while(inicio <= fim)
    {
    	// Calcula o meio do intervalo atual
        int meio = (inicio + fim) / 2;

		// Caso 1: Encontrou o valor exatamente no meio
        if(vet[meio] == chave)
            return meio;

		// Caso 2: O valor do meio é menor que a chave?
		// Então a chave só pode estar na metade direita (maior)
        if(vet[meio] < chave)
            inicio = meio + 1;
        // Caso 3: O valor do meio é maior?
        // Então a chave está na metade esquerda (menor)
        else
            fim = meio - 1;
    }
    return -1; // Não encontrado
}

// MAIN
int main()
{
	// 1. Criação do vetor (hardcoded/fixo neste exemplo)
    int original[20] = {2,45,6,7,-1,-7,78,32,16,18,21,23,13,3,5,9,10,41,42,45};
    int copia[20];

	// Faz uma cópia para preservar o vetor original intacto
    for(int i = 0; i < 20; i++)
        copia[i] = original[i];

	// 2. Ordenação
    // bubbleSort(copia, 20); // Opção mais lenta
    quickSort(copia, 0, 19); // Opção mais rápida (início=0, fim=19)

	// Exibição dos Vetores
    cout << "Vetor original\n";
    for(int i = 0; i < 20; i++)
        cout << original[i] << " | ";

    cout << "\nVetor ordenado\n";
    for(int i = 0; i < 20; i++)
        cout << copia[i] << " | ";

	// 3. Teste da Busca Sequencial
    cout << "\n\nBusca sequencial:\n";
    // Procurando o valor 21 no vetor copia
    int posSeq = buscaSequencial(copia, 20, 21);
    
    if(posSeq != -1)
        cout << "Valor encontrado na posição " << posSeq << endl;
    else
        cout << "Valor não encontrado!!\n";

	// 4. Teste da Busca Binária
	// Importante: Estamos passando 'copia' porque a Busca Binária PRECISA estar ordenada
    cout << "\nBusca Binária:\n";
    // Procurando o valor 13
    int posBin = buscaBinaria(copia, 0, 19, 13);
    
    if(posBin != -1)
        cout << "Valor encontrado na posição " << posBin << endl;
    else
        cout << "Valor não encontrado!!\n";

    return 0;
}