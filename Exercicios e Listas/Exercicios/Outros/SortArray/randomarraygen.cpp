#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int arraySize, resposta = 0;
    string filename = "";

    cout << "Insira o tamanho do array: ";
    cin >> arraySize;
    while (!(resposta == 1 || resposta == 2))
    {
        cout << "Defina 1 para int, 2 para float: ";
        cin >> resposta;
        cout << resposta << endl;
    }
    while (filename == "")
    {
        cout << "De um nome para o arquivo:\n";
        cin >> filename;
    }
    filename += ".txt";

    ofstream newFile(filename);
    if (resposta == 1)
    {
        // int array
        for (int i = 0; i < arraySize; i++)
        {
            int n = rand() % 1000;
            newFile << n << endl;
        }
    }
    else if (resposta == 2)
    {
        // float array
        for (int i = 0; i < arraySize; i++)
        {
            float a = float(rand());
            float b = rand() % 1000;
            float n = float((a / RAND_MAX) + b);
            newFile << n << endl;
        }
    }
        newFile.close();

        return 0;
}