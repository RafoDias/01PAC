#include <iostream>

using namespace std;

// esse programa calcula o fatorial de um numero inteiro inserido pelo usuario

int main()
{
    int n;
    cin >> n;

    int resultado = 1;
    int i = 2;

    while (i <= n)
    {
        resultado = resultado * i;
        i++;
    }

    cout << "O resultado: " << resultado;
}