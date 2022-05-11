#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    cout << "Insira um numero real:\n";
    cin >> x;

    if (x < 0) x *= -1;

    cout << "\nValor absoluto: " << x;
    
    return 0;
}