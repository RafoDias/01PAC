/*
AULA SOBRE ARRAYS (CHAMADOS TAMBÉM DE VETOR OU LISTA)

Sintaxe da declaração do array:
    var nome_do_array[tamanho_do_array];
    int numeros [n] = {elemento0, elemento1, ..., elementon-1};

Quando uma função for receber um array, é necessário que se passe, além do array, o tamanho do array:
    Declaração da função: int Maior_Numero(int numeros[], int qtd)
    Chamando a função: Maior_Numero(numeros, n)

        NOTA: Arrays passados em funções são ponteiros; isso significa que qualquer modificação no array dentro da função 
        modifica o array fora da função, diferente de variáveis, que são passadas cópias ao invés de ponteiros
*/

// O tamanho do array não pode ser definido por variáveis, apenas por constantes.
#include <iostream>
#define TAMANHOTURMA 10 // Tamanho do array utilizado

using namespace std;

// Retorna a maior nota do array de notas
float Maior_Nota(float notas[], int qtd)
{
    float maiorNota = notas[0];
    for (int i = 0; i < qtd; i++)
    {
        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }
    }
    return maiorNota;
}

// Retorna a media das notas
float Media_Turma(float notas[], int qtd)
{
    float soma = 0;
    float media;
    for (int i = 0; i < qtd; i++)
    {
        soma += notas[i];
    }
    media = (soma/qtd);
    return media;
}

// Retorna o primeiro indice que corresponde à nota sendo procurada
int Busca_Nota(float notas[], int qtd, float procurado)
{
    int indice = -1;
    for(int i = 0; i < qtd; i++)
    {
        if(notas[i] == procurado)
        {
            indice = i;
            return indice;
        }
    }
    return indice;
}
/* OBS: C++ Não retorna arrays, mas sim pointers para arrays! https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm
int[] Busca_Todas_Notas(float notas[], int qtd, float procurado)
{
    int temp[qtd];
    int cont = 0;
    for (int i = 0; i < qtd; i++)
    {
        if(notas[i] == procurado)
        {
            temp[cont] = i;
            cont++;
        }
    }
    // Obs: Retorna um array com todos os indices que encontram algo, sendo procurados[0] o tamanho do array.
    // Se procurados[0] == 0, então não há indices no array passado que possuam o valor procurado
    // Os índices de 1 até cont são os que possuem o valor procurado
    cont++;
    int procurados[cont];
    procurados[0] == cont;
    for (int i = 1; i < cont; i++)
    {
        procurados[i] = temp[i];
    }
    return procurados;
}*/

// Selection Sort, fonte: https://www.tutorialspoint.com/cplusplus-program-to-implement-sorted-array
// Deixa o array passado em ordem crescente
void Ordena_Array_Notas(float notas[], int n)
{
    int i, j, min;
    float temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (notas[min] > notas[j])
                min = j;
        }
        temp = notas[i];
        notas[i] = notas[min];
        notas[min] = temp;
    }
}

int main()
{
// Declarando um array preenchível por até TAMANHOTURMA 'ints'
float notas[TAMANHOTURMA];

// Preenchendo o array com entradas do console
for (int i = 0; i < TAMANHOTURMA; i++) 
{
    cin >> notas[i];
}

// Imprimindo o primeiro valor do array
cout << "Primeira nota: " << notas[0];

// Imprimindo o último valor do array
cout << " | Ultima nota: " << notas[TAMANHOTURMA-1] << endl;

// Imprimindo a maior nota e a media das notas:
cout << "Maior nota: " << Maior_Nota(notas, TAMANHOTURMA) << "\nMedia da turma: " << Media_Turma(notas, TAMANHOTURMA) << endl;

// Imprimindo o array completo
cout << "Array de notas desordenado: {";
for (int i = 0; i < TAMANHOTURMA; i++)
{
    cout << notas[i];
    if (i < TAMANHOTURMA-1) cout << ", ";
}
cout << "}" << endl;

// Ordenando e imprimindo o array
Ordena_Array_Notas(notas, TAMANHOTURMA);

cout << "Array de notas ordenado: {";
for (int i = 0; i < TAMANHOTURMA; i++)
{
    cout << notas[i];
    if (i < TAMANHOTURMA-1) cout << ", ";
}
cout << "}" << endl;

return 0;
}