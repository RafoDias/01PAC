#include <iostream>
using namespace std;

int main()
{
    int n, i, md = 1;
    cout << "Insira um valor inteiro: ";
    cin >> n;
    i = n - 1;
    while (i > 1)
    {
        if (n % i == 0) md = i;
        i--;
    }
    if (md != 1) cout << "Menor divisor: " << md << endl;
    else cout << n << " e primo\n";
    return 0;
}