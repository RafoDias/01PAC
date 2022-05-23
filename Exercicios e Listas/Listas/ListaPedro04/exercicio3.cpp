#include <iostream>
using namespace std;

int main()
{
    int numero, entrada = 100, count = 0;
    numero = rand() % 100;
    cout << "Entrada do jogador: ";
    cin >> entrada;
    while (!(entrada == numero || entrada < 0))
    {
        if (entrada > numero) cout << "Muito grande!\nTentar novamente? ";
        else if (entrada < numero) cout << "Muito pequeno!\nTentar novamente? ";
        cin >> entrada;
        count++;
    }
    if (entrada == numero)
    {
        cout << "Parabens! Voce acertou em " << count << " tentativas!";
        return 0;
    }
    else return 0;
    
}