#include <iostream>

using namespace std;

int main()
{
    // Quando você não sabe quantas vezes precisará executar o loop, mas sabe quando parar
    int i = 0;
    while (i <= 10000)
    {
        cout << i << endl;
        i++;
    }

    // Quando você quer executar o loop uma vez antes de checar a condição
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10000);
    
    // Quando você sabe quantas vezes o loop precisa ser executado
    for (int i = 0; i <= 10000; i++)
    {
        cout << i << endl;
    }
}