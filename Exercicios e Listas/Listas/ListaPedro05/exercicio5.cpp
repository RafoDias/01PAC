#include <iostream>

using namespace std;

int main(){
    float deposito;
    float taxa = 0.05;
    float montante;
    int anos;
    cout << "Insira o valor do deposito e o tempo que sera deixado:\n";
    cin >> deposito >> anos;
    cout << "Inicio: " << deposito << " Reais" << endl;

    montante = deposito;

    for (int i = 1; i < (anos+1); i++)
    {
        montante = montante + (montante * taxa);
        printf("A soma e %1.2f Reais apos o ano %i\n", montante, i);
    }
    printf("Ao fim: %1.2f Reais\n", montante);
    return 0;
}