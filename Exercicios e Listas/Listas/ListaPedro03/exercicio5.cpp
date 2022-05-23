#include <iostream>
using namespace std;

int main()
{
    int n, prod = 1;
    cout << "Insira um inteiro: ";
    cin >> n;
    while (n > 0)
    {
        prod *= n;
        n--;
    }
    cout << "Fatorial: " << prod;
    return 0;
}