#include <iostream>
#include <cmath>

using namespace std;

int MaiorDivComum(int x, int y)
{
    if (y > x) 
    {
        int temp = y;
        y = x;
        x = temp;
    }
    int resto = x % y;
    while (resto != 0)
    {
        x = y;
        y = resto;
        resto = x % y;
    }
    return y;
}

int main()
{
    int a, b;

    cout << "Insira dois valores para encontrar o maior divisor comum: ";
    cin >> a >> b;

    cout << "O maior divisor comum e: " << MaiorDivComum(a, b) << endl;

    return 0;
}