#include <iostream>
using namespace std;

int main()
{
    cout << "X*Y | 0  1  2  3  4  5  6  7  8  9  10\n-----------------------------------------\n";
    for (int x = 0; x < 11; x++)
    {
        if (x < 10) {
            cout << x << "   | ";}
        else {
            cout << x << "  | "; }

        for (int y = 0; y < 11; y++)
        {
            cout << x*y;
            if ((x*y) > 9)
                cout << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}