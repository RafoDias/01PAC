#include <iostream>
#include <cmath>

using namespace std;

float ImpostoMensal(float sal); // Recebe a base de calculo do rendimento e retorna o imposto em um mes
float ImpostoAnual(float sal); // Recebe a base de calculo do rendimento e retorno o imposto em um ano

int main()
{
    float salario;
    cout << "Insira o salario mensal base ou '0', para sair do programa.\n";
    cin >> salario;

    while (salario > 0) // Assumir que apenas valores positivos serao inseridos encerram o programa
    {
    cout << "Imposto mensal: " << ImpostoMensal(salario) << " | Imposto anual: ";
    cout << ImpostoAnual(salario) << endl;

    cout << "Insira o salario mensal base ou '0', para sair do programa.\n";
    cin >> salario;
    }
    return 0;
}

float ImpostoAnual(float sal)
{
    return (ImpostoMensal(sal) * 12);
}

float ImpostoMensal(float s)
{

    if (s <= 1903.98)
    {
        return ((s*0.0)/100) - 0;
    }
    else if (s > 1903.98 && s <= 2826.65)
    {
        return ((s*7.5)/100) - 142.8;
    }
    else if (s > 2826.65 && s <= 3751.05)
    {
        return ((s*15.0)/100) - 354.8;
    }
    else if (s > 3751.05 && s <= 4664.68)
    {
        return ((s*22.5)/100) - 636.13;
    }
    else
    {
        return ((s*27.5)/100) - 869.36;
    }
}