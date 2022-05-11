#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Insira um valor inteiro: \n";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Par";
    }
    else
    {
        cout << "Impar";
    }
    return 0;
}