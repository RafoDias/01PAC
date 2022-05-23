#include <iostream>
using namespace std;

int main()
{
    string palavra;
    char letra;
    cout << "Insira caracteres individuais ou 's' para sair:\n";
    cin >> letra;
    palavra += letra;
    while (letra != 's')
    {
        cin >> letra;
        palavra += letra;
    }
    cout << palavra;
    return 0;
}