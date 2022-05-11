#define PI 3.14159

#include <iostream>

using namespace std;

int main()
{
    int r; double p, s;
    // Pergunte o valor do raio do circulo;
    cout << "Qual o raio do circulo?\n r = ";

    // Leia o valor do raio
    cin >> r;

    p = 2*PI*r; // perimetro do circulo
    s=PI*r*r; // Area do circulo

    // Escrever: "O circulo de raio r"
    // Escrever "Tem um perimetro p e uma area s"
    cout << "O circulo de raio " << r << " tem um perimetro " << p << " e uma area " << s << endl;

    return 0;
}