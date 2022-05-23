#include <iostream>
using namespace std;

int main()
{
    int x, y;
    for (int x = 0; x < 6; x++) 
    {
        for (int y = 0; y < 11; y++)
        {
            cout << "(" << x << ", " << y << ") | ";
        }
        cout << endl;
    }
    return 0;
}