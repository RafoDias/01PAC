#include <iostream>
#include <cmath>

using namespace std;

void DiasCorridos(int dias)
{
    int semanas = dias / 7;
    dias = dias % 7;
    cout << semanas << " semanas e " << dias << " dias";
}

int main()
{
    int dias;
    cout << "Dias decorridos: ";
    cin >> dias;
    DiasCorridos(dias);
    return 0;
}