/*
Implemente um programa em C++ que faça o seguinte:

1- Defina uma struct chamada TFisio contendo os seguintes campos:
nome, peso, altura, sexo e idade.

2- No programa principal:
-Crie um array para armazenar até 5 clientes.
-Permita o cadastro dos clientes, lendo os dados de cada um.

3- O programa deve oferecer um menu com as seguintes opções:
1 - Cadastro: cadastrar novos clientes até o limite de 5.
2 - IMC dos clientes masculinos: calcular e exibir o IMC (peso / (altura * altura)) apenas dos clientes do sexo masculino.
3 - Média das idades das clientes femininas: calcular e exibir a média de idade apenas das clientes do sexo feminino.
4 - Listagem de clientes abaixo de 30 anos com IMC acima de 24: exibir os nomes, idade e IMC desses clientes.
0 - Finalizar o programa: encerrar a execução.

4- Observações:
O IMC deve ser calculado como IMC = peso/(altura*altura).
O programa deve validar corretamente os dados de sexo e permitir nomes com espaços.
Deve tratar situações em que não há clientes cadastrados para determinadas operações (ex.: média das idades).
*/

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

struct TFisio{
    string nome;
    float peso, altura;
    int idade;
    char sexo;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	
    TFisio clientes[5];
    int op = -1, cont = 0;

    do {
        cout << "\nClínica Tabajara\n";
        cout << "1- Cadastro\n";
        cout << "2- IMC dos clientes masculinos\n";
        cout << "3- Média das idades das clientes femininas\n";
        cout << "4- Listagem de clientes abaixo de 30 anos com IMC acima de 24\n";
        cout << "0- Finaliza o programa\n";
        cout << "Informe sua opção: ";
        cin >> op;

        switch(op){
            case 1:
                if(cont < 5){
                    cout << "Nome: "; cin >> ws; getline(cin, clientes[cont].nome); // ws = limpar espaços em branco do buffer antes de ler com getline()
                    cout << "Peso: "; cin >> clientes[cont].peso;
                    cout << "Altura: "; cin >> clientes[cont].altura;
                    cout << "Idade: "; cin >> clientes[cont].idade;
                    cout << "Sexo (F/M): "; cin >> clientes[cont].sexo;
                    cont++;
                } else {
                    cout << "Não há espaço disponível\n";
                }
                break;

            case 2: // IMC dos clientes masculinos
                for(int i = 0; i < cont; i++){
                    if(toupper(clientes[i].sexo) == 'M'){ // transforma em maiúscula (m vira M)
                        float imc = clientes[i].peso / (clientes[i].altura * clientes[i].altura);
                        cout << clientes[i].nome << " IMC = " << imc << endl;
                    }
                }
                break;

            case 3: // Média das idades das clientes femininas
                {
                    float soma = 0;
                    int qtde = 0;
                    for(int i = 0; i < cont; i++){
                        if(toupper(clientes[i].sexo) == 'F'){ // transforma em maiúscula (f vira F)
                            soma += clientes[i].idade;
                            qtde++;
                        }
                    }
                    if(qtde > 0)
                        cout << "A média das idades das clientes é " << soma/qtde << endl;
                    else
                        cout << "Não há clientes femininas cadastradas.\n";
                }
                break;

            case 4: // Listagem de clientes abaixo de 30 anos com IMC acima de 24
                for(int i = 0; i < cont; i++){
                    float imc = clientes[i].peso / (clientes[i].altura * clientes[i].altura);
                    if(clientes[i].idade < 30 && imc > 24){
                        cout << clientes[i].nome << " - Idade: " << clientes[i].idade << " - IMC: " << imc << endl;
                    }
                }
                break;

            case 0:
                cout << "Programa finalizado.\n";
                break;

            default:
                cout << "Opção inválida.\n";
                break;
        }

    } while(op != 0);

    return 0;
}