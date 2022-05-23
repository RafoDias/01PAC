#include <iostream>
using namespace std;

int main()
{
    double quantia, moedas[] = {1.0f, 0.5f, 0.25f, 0.10f, 0.05f, 0.01f};
    int cedulas[] = {100, 50, 20, 10, 5, 2};
    cout << "Insira uma quantia em reais: ";
    cin >> quantia;
    for (int i = 0; i < 6; i++)
    {
        int notas = (quantia/cedulas[i]);
        cout << notas << " nota(s) de " << cedulas[i] << endl;
        quantia = (quantia - (notas * cedulas[i]));
    }
    for (int i = 0; i < 6; i++) // Testes com "06 centavos" parecem dar errado, provavelmente por conta da imprecisão de valores decimais.
    {
        int notas = (quantia/moedas[i]);
        cout << notas << " moeda(s) de " << moedas[i] << endl;
        quantia = (quantia - (notas * moedas[i]));
    }
    return 0;    
}