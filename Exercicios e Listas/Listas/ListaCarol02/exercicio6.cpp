#include <iostream>
#include <cmath>
using namespace std;

float dist_pontos(float p1[], float p2[])
{
    return sqrt(pow((p1[0] - p1[1]),2) + pow((p2[0] - p2[1]),2));
}

int main()
{
    float a[2], b[2], c[2];
    float perimetro = 0;

    cout << "Para o primeiro vertice, entre x e y respectivamente:\n";
    cin >> a[0] >> a[1];
    cout << "Para o segundo vertice, entre x e y respectivamente:\n";
    cin >> b[0] >> b[1];
    cout << "Para o terceiro vertice, entre x e y respectivamente:\n";
    cin >> c[0] >> c[1];
    perimetro += dist_pontos(a,b);
    perimetro += dist_pontos(a,c);
    perimetro += dist_pontos(b,c);
    cout << "Perimetro: " << perimetro << endl;
    return 0;
}