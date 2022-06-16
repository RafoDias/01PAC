#include <iostream>

using namespace std;

int main()
{
    int inteiro, copia;
    cin >> inteiro;
    copia = inteiro - 1;
    while (copia != 0)
    {
        if (inteiro % copia == 0)
        {
            cout << copia << ", ";
        }
        copia--;
    }
    return 0;
}