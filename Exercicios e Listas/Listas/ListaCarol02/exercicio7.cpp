#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;

float Volume_Caixa(float a, float b, float c)
{
    return (a * b * c);
}
float Volume_Cilindro(float raio, float altura)
{
    return ((raio * raio) * PI) * altura;
}

int main()
{
    float comprimento, largura, altura, raio, volume = 0;

    cout << "Insira as dimensões:\nComprimento: ";
    cin >> comprimento;
    cout << "Largura: ";
    cin >> largura;
    cout << "Altura: ";
    cin >> altura;
    cout << "Raio: ";
    cin >> raio;

    volume += Volume_Caixa(comprimento, largura, altura);
    volume -= Volume_Cilindro(raio, altura);
    cout << "Volume: " << volume << endl;
    
    return 0;
}