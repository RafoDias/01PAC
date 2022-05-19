#include <iostream>
#include <cmath>

using namespace std;

float CalculoAuxilio(int dependentes)
{
    return 50.00*dependentes;
}

int main()
{
    int dependentes;
    cout << "Numero de dependentes para o auxilio: ";
    cin >> dependentes;
    cout << "Auxilio a ser recebido: " << CalculoAuxilio(dependentes) << endl;
}