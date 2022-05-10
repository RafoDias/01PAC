#include <iostream>
using namespace std;

double x;

int main()
{
    cout << "Insira 3,14\n";
    cin >> x;
    cout << "x tem o valor: " << x << endl;

    double y;
    cout << "y antes da atribuicao: " << y << endl;
    y = 3.14;
    cout << "y depois da atribuicao: " << y << endl;
}