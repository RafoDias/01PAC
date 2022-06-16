#include <iostream>

using namespace std;
/*
void loops()
{
    // Quando você não sabe quantas vezes precisará executar o loop, mas sabe quando parar
    int i = 0;
    while (i <= 10000)
    {
        cout << i << endl;
        i++;
    }

    // Quando você quer executar o loop uma vez antes de checar a condição
    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10000);
    
    // Quando você sabe quantas vezes o loop precisa ser executado
    for (int i = 0; i <= 10000; i++)
    {
        cout << i << endl;
    }
}*/

int main()
{
    int somaDownloads, qtdMB, numDownloads = 0;
    int usuarios = -1;
    float preco_mb;

    cin >> preco_mb; // Entrada pelo usuario o preco por megabyte
    do
    {
        int tamanho;
        usuarios++;

        cin >> numDownloads; // Questiona o primeiro usuario quantos downloads serao feitos
        for (int i = 0; i < numDownloads; i++)
        {
            cin >> tamanho; // Pergunta o tamanho em MB do download numero i

            if (tamanho <= 2) { qtdMB++; } // Conta quantos downloads com 2MB ou menos serao feitos

            somaDownloads += tamanho; // Adiciona o tamanho para o total
        }
    } while  (numDownloads > 0); // quando entrarem uma quantidade de downloads menor que 1, sair do loop

    if (usuarios > 0) { cout << ((somaDownloads*preco_mb)/usuarios) << endl << qtdMB; } // Imprimir o valor a ser pago por cada usuario E quantos downloads com 2MB ou menos serai feitos

    return 0;
}