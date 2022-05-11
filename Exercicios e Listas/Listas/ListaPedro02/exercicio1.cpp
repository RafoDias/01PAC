#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, y;
    cout << "Insira um valor para x:\n";
    cin >> x;
    if (x > 0)
    {
        y = (10 / x) + (x * x);
        cout << "y vale: " << y;
    }
    else
    {
        y = (x * x);
        cout << "y vale: " << y;
    }
    return 0;
}