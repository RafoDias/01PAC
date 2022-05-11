#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y, z, max;
    cout << "Insira tres numeros reais:\n";
    cin >> x >> y >> z;
    float reais[3] = {x, y, z};
    for (int i = 2; i > 0; i--)
    {
        if (reais[i] < reais[i-1]) max = reais[i-1];
        else max = reais[i];
    }
    cout << "Maior valor: " << max << endl;
    return 0;
}