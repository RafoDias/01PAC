#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    int number = 1;
    for (int i = 0; i < 10;)
    {
        if (number % 2 != 0)
        {
            vetor[i] = number;
            i++;
        }
        number++;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << i << ": " << vetor[i] << " | ";
    }

    return 0;
}