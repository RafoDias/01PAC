#include <iostream>

using namespace std;

// Esse programa deve ser executado usando como entrada o arquivo "entrada.txt" encontrado nessa mesma pasta.
//  WINDOWS: Get-Content entrada.txt | ./notas
//  LINUX : ./notas < entrada.txt
// Caso queira criar um arquivo de saída, é só adicionar "> saida.txt" no final do comando:

int main()
{
    string nome;
    float n1, n2, media;
    for (int i = 0; i < 8; i++)
    {
        cin >> nome >> n1 >> n2;
        media = (n1+n2)/2;
        if (media < 3.0)
        {
            cout << nome << " " << media << " REPROVADO\n";
        }
        else if (media < 7.0)
        {
            cout << nome << " " << media << " PROVA FINAL\n";
        }
        else
        {
            cout << nome << " " << media << " APROVADO\n";
        }
    }
    return 0;
}