#include <iostream>
#include <cmath>

using namespace std;

// Exercicio 1 Linha 68
int calcula_soma_ex1(int x, int y, int z)
{
    return (x + y + z);
}
void calcula_media_ex1(int x, int y, int z)
{
    cout << "Media: " << ((x + y + z)/3.0) << endl;
}

// Exercicio 2 Linha 75
int calcula_soma_ex2(int x, int y, int z)
{
    int soma = x + y + z;
    cout << "Soma: " << soma << endl;
    return soma;
}
void calcula_media_ex2(int soma)
{
    float media = soma / 3.0;
    cout << "Media: " << media << endl;
}

// Exercicio 3 Linha 83
int calcula_soma_ex3(int x, int y, int z)
{
    int soma = x + y + z;
    cout << "Soma: " << soma << endl;
    return soma;
}
void calcula_media_ex3(int x, int y, int z)
{
    float media = (calcula_soma_ex3(x, y, z) / 3.0);
    cout << "Media: " << media << endl;
}

// Exercicio 4 Linha 89
int le_calcula_soma()
{
    int soma, a, b, c;
    cout << "Insira tres numeros inteiros: \n";
    cin >> a >> b >> c;
    soma = a + b + c;
    return soma;
}
void calcula_media_ex4(int soma)
{
    float media = (soma / 3.0);
    cout << "Media: " << media << endl;
}

int main() // Main. Insira valores de 1 a 4 antes dos numeros a serem calculados para escolher o exercicio. O resultado deve ser sempre o mesmo.
{
    int exercicio = 0, a, b, c;
    cout << "Escolha o numero do exercicio, de 1 a 4: ";
    cin >> exercicio;

    if (exercicio > 4 || exercicio < 1)
    {
        cout << "Nenhum exercicio valido";
        return 0;
    }
    else if (exercicio == 1) // Linha 6
    {
        cout << "Insira tres numeros inteiros: \n";
        cin >> a >> b >> c;
        cout << "Soma: " << calcula_soma_ex1(a, b, c) << endl;
        calcula_media_ex1(a, b, c);
    }
    else if (exercicio == 2) // Linha 16
    {
        int soma;
        cout << "Insira tres numeros inteiros: \n";
        cin >> a >> b >> c;
        soma = calcula_soma_ex2(a, b, c);
        calcula_media_ex2(soma);
    }
    else if (exercicio == 3) // Linha 29
    {
        cout << "Insira tres numeros inteiros: \n";
        cin >> a >> b >> c;
        calcula_media_ex3(a, b, c);
    }
    else // Linha 42
    {
        int soma = le_calcula_soma();
        calcula_media_ex4(soma);
    }
    return 0;
}