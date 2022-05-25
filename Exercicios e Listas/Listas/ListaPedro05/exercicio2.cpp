#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d, x, y;
    cout << "Insira dois intervalos, separando os valores por espaco (' ') ou enter. Exemplo: 1 6 3 11 representam [1,6][3,11]\n";
    cin >> a >> b >> c >> d;

    if (a <= c) x = c;
    if (b <= d) y = b;
    cout << "A intersecao e o intervalo " << "[" << x << "," << y <<"]";
    return 0;
}