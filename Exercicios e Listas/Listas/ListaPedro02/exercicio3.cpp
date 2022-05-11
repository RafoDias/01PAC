#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y, max;
    cout << "Insira dois numeros reais:\n";
    cin >> x >> y;

    if (x > y)  max = x;
    else max = y;

    cout << "O maior valor entre os dois e: " << max;
    return 0;
}