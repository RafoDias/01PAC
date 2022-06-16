#include <iostream>

using namespace std;

// Get-Content vetorex1.txt | ./exercicio1.exe

int main()
{
    int vetor[12];
    int x, y;

    for (int i = 0; i < 12; i++) // Lendo input de vetorex1.txt e adicionando ao array
    {
        int temp;
        cin >> temp;
        vetor[i] = temp;

        cout << (i) << ": " << vetor[i] << " | ";
    }
    cin >> x >> y;

    cout << endl << "x: " << x << ", y: " << y << endl << "Soma: " << (vetor[x] + vetor[y]) << endl;
    
    return 0;
}