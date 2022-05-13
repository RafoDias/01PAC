#include <iostream>
#include <cmath>

using namespace std;

int SomaTresInteiros(int x, int y, int z)
{
    int result = x + y + z;

    cout << "Resultado: " << result << endl;
    return result;
}

int main()
{
    // Para que a função receba os parâmetros, os valores precisam ser inseridos antes dela ser chamada;
    int a, b, c;
    cout << "Insira tres numeros inteiros:\n";
    cin >> a >> b >> c;

    SomaTresInteiros(a, b, c);
    return 0;
}


    // Exemplo alternativo para o exercício abaixo:
/*

int SomaTresInteiros(int x, int y, int z)
{
    int result = x + y + z;
    return result;
}

int main()
{
    int a, b, c;
    cout << "Insira tres numeros inteiros:\n";
    cin >> a >> b >> c;

    cout << "Resultado: " << SomaTresInteiros(a, b, c) << endl;

    return 0;
}
*/