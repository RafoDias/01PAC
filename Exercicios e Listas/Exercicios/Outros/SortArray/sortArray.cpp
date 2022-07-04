#include <iostream>
#include <fstream>

using namespace std;

#define TAMANHOARRAY 1000
#define VALORMAX 1000 // O maior valor encontrado dentro dos arrays
/*
    Esse programa usa o Counting Sort para ordenar um array de ints.

Comando para puxar o array de int no windows: Get-Content intArray1000.txt | ./sortArray.exe
*/
void Count_Sort(int array[], int size);

int main()
{
    // Declaramos o array de saída e um array para contar as repetições do array de entrada
    int array[TAMANHOARRAY];
    cout << "O programa esta configurado para:\nUm array de tamanho: " << TAMANHOARRAY 
        <<  "\nUsar counting sort\nNome do arquivo de saida: sortedArrayFile.txt\n"; // Nome do algoritmo de ordenação e do arquivo de texto
    
    for (int i = 0; i < TAMANHOARRAY; i++)
    {
        cin >> array[i];
    }

    Count_Sort(array, TAMANHOARRAY); // Função se encontra após a função main
    
    ofstream newFile("sortedArrayFile.txt"); // Arquivo de saída

    for (int i = 0; i < TAMANHOARRAY; i++) // Preenchendo o arquivo de saída
    {
        newFile << array[i] << endl;
    }
    newFile.close();
    
    return 0;
}

void Count_Sort(int array[], int size)
{
    int output[TAMANHOARRAY + 1];
    int count[VALORMAX];
    int max = array[0];

    // Achar o maior elemento do array
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max) max = array[i];
    }

    // Inicializa cada espaço do array count como zero
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    
    // Armazena a contagem de cada elemento
    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    // Armazena a contagem acumulada
    for(int i = 1; i <= max; i++)
    {
        count[i] += count[i-1];
    }

    // Encontra o índice de cada elemento do array original no array de contagem,
    // então coloca os elementos no array de saída
    for (int i = size-1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    // Iguala o array de entrada ao igual de saída
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}
