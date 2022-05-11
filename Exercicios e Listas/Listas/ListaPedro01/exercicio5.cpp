#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char car1, car2, car3, temp;
    cout << "Informe tres caracteres, atentando-se a ordem: \n";
    cin >> car1 >> car2 >> car3;
    temp = car1;
    car1 = car2;
    car2 = car3;
    car3 = temp;
    cout << "Nova ordem:\ncar1: " << car1 << "\ncar2: " << car2 << "\ncar3: " << car3;
    return 0;
}