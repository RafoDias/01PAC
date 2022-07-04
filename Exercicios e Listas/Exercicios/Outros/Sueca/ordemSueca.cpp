/* 
    Na sueca, diferentes cartas possuem diferentes valores.
    Neste exercicio, o objetivo é criar um array com todas
    as 40 cartas usadas na sueca. O array será odernado, mas
    não da forma que buscamos: ao ser inicializado, serão
    adicionadas as cartas para cada naipe de forma crescente.
    O objetivo do programa é reordenar as cartas independente-
    mente dos seus respectivos números ou naipes, mas de acordo
    com os pontos que valem no jogo Sueca. Dessa forma:

    Ás            vale  11 pontos
    sete          vale  10 pontos
    rei           vale   4 pontos
    valete        vale   3 pontos
    dama          vale   2 pontos
    seis, cinco , quatro , três, dois    todas sem pontuação.

    Ao final do programa, o array deve estar ordenado com as cartas
    de maior pontuação até as cartas de menor pontuação
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define TOTALCARTAS 40
#define CARTASPORNAIPE 10
#define MAXPONTOS 11

void Count_Sort(string array[][2], int size);

int main()
{
    // O valor array[n][0] armazena o nome da carta, array[n][1] armazena quantos pontos vale:

    string nomeCartas[CARTASPORNAIPE][2] = {{"As","11"},{"Dois","0"},{"Tres","0"},{"Quatro","0"},{"Cinco","0"},{"Seis","0"},{"Sete","10"},{"Valete","3"},{"Dama","2"},{"Rei","4"}};
    
    string todasCartas[TOTALCARTAS][2]; 
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = (i*10); j < ((i*10)+10); j++) // Lembrando que são 10 cartas por naipe. Deixando esse 10 para efeitos de "visualização".
        {
            switch (i)
            {
                case 0:
                    todasCartas[j][0] = nomeCartas[j%10][0] + " de Copas";
                    todasCartas[j][1] = nomeCartas[j%10][1];
                    break;
                case 1:
                    todasCartas[j][0] = nomeCartas[j%10][0] + " de Espadas";
                    todasCartas[j][1] = nomeCartas[j%10][1];
                    break;
                case 2:
                    todasCartas[j][0] = nomeCartas[j%10][0] + " de Ouros";
                    todasCartas[j][1] = nomeCartas[j%10][1];
                    break;
                case 3:
                    todasCartas[j][0] = nomeCartas[j%10][0] + " de Paus";
                    todasCartas[j][1] = nomeCartas[j%10][1];
                    break;
            }
        }
    }

    Count_Sort(todasCartas, TOTALCARTAS);

    ofstream newFile("sortedSueca.txt");
    
    for (int i = 0; i < TOTALCARTAS; i++) // Preenchendo o arquivo de saída
    {
        newFile << todasCartas[i][0] << endl;
    }
    return 0;
}
    
void Count_Sort(string array[][2], int size)
{
    string output[TOTALCARTAS + 1][2];
    int count[MAXPONTOS];

    // Inicializa cada espaço do array count como zero
    for (int i = 0; i <= MAXPONTOS; i++)
    {
        count[i] = 0;
    }
    
    // Armazena a contagem de cada elemento
    for (int i = 0; i < size; i++)
    {
        count[stoi(array[i][1])]++;
    }

    // Armazena a contagem acumulada
    for(int i = 1; i <= MAXPONTOS; i++)
    {
        count[i] += count[i-1];
    }

    // Encontra o índice de cada elemento do array original no array de contagem,
    // então coloca os elementos no array de saída
    for (int i = size-1; i >= 0; i--)
    {
        output[count[stoi(array[i][1])] - 1][0] = array[i][0];
        output[count[stoi(array[i][1])] - 1][1] = array[i][1];
        count[stoi(array[i][1])]--;
    }
    // Iguala o array de entrada ao de saída
    for (int i = 0; i < size; i++)
    {
        array[(size-1)-i][0] = output[i][0];
        array[(size-1)-i][1] = output[i][1];
    }
}
  
