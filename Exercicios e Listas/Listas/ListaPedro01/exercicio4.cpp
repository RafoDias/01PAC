#define PI 3.14159

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float raio, area, volume;
    cout << "Informe o raio: \n";
    cin >> raio;
    area = PI * (pow(raio,2));
    volume = (4 * PI * (pow(raio,3)) / 3);
    cout << "\nraio: " << raio << "\narea: " << area << "\nvolume: " << volume;
    return 0;
}