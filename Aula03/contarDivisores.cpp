#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, d, contador = 0;
    cout << "Insira o valor para calcular:\n";
    cin >> n;
    d = n;
    cout << n << " e divisivel por: \n";
    while (d > 0)
    {
        if (n % d == 0)
        {
            if (d == 1) cout << d << endl;
            else (cout << d << ", ");
            contador++;
        }
        d--;
    }
    cout << n << " possui um total de " << contador << " divisores";
    return 0;
}