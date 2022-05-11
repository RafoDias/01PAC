#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    float r1, r2, r3;
    float req;
    std::string serie ("serie");
    std::string paralelo ("paralelo");
    std::string resposta;

    cout << "Insira o valor de tres resistencias:\n";
    cin >> r1 >> r2 >> r3;

    cout << "Informe se estao ligadas em 'serie' ou em 'paralelo', usando essas palavras-chave.\n";
    cin >> resposta;

    if ((resposta.compare(paralelo) == 0))
    {
        req = (r1 * r2 * r3)/(r1*r2 + r1*r3 + r2*r3);
        cout << "Resistencia Equivalente: " << req;
    }
    else
    {
        req = r1 + r2 + r3;
        cout << "Resistencia Equivalente: " << req;
    }
    
    return 0;
}