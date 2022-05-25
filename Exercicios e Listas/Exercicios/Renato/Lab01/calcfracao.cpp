#include <iostream>
#include <cmath>

using namespace std;

int mdc(int a, int b)
{
    int aux;
    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    while (b != 0)
    {
        aux = a%b;
        a = b;
        b = aux;
    }
    return a;
}

int mmc(int a, int b)
{
    return (a * b)/mdc(a,b);
}

void ImprimeSimplificada(int n, int d)
{
    int maiorDivC = mdc(n, d);
    n = n / maiorDivC;
    d = d / maiorDivC;
    cout << "Fracao: " << n << "/" << d << endl;
}

void SomaFracao(int a, int b, int c, int d)
{
    int num, den;
    num = (a * d) + (b * c);
    den = (b * d);
    ImprimeSimplificada(num, den);
}

int main()
{
    int a, b, c, d;
    cout << "Insira quatro inteiros para calcular duas fracoes:\n";
    cin >> a >> b >> c >> d;
    
    SomaFracao(a, b, c, d);

    return 0;
}
