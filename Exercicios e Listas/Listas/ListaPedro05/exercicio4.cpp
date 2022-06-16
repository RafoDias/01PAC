#include <iostream>

using namespace std;

int main(){
    float deposito;
    float taxa = 0.05;
    float montante;

    cin >> deposito;
    cout << "Inicio: " << deposito << " Reais" << endl;

    montante = deposito;

    for (int i = 1; i < 11; i++)
    {
        montante = montante + (montante * taxa);
        printf("A soma e %1.2f Reais apos o ano %i\n", montante, i);
    }
    printf("Ao fim: %1.2f Reais\n", montante);
    return 0;
}