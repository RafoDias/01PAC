#include <iostream>
#include <new>
#include "matrizes.cpp"
#include "racionais.cpp"

using namespace std;

int main()
{
    double** ptr = new double*[2];

    ptr[0] = new double[2] {1.0, 2.0};
    ptr[1] = new double[2] {3.0, 4.0};
    
    Matrix a = Matrix(ptr);

    cout << a;

    return 0;
}