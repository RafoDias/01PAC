#include <iostream>
#include <cmath>

using namespace std;

// Funcoes
float SalarioBase(float valor_da_hora, float horas_trabalhadas);
float bonus_tempo_servico(int ano_servico, float salarioBase);

int main()
{
    float valorHora, horasTrabalhadas;
    int tempoServico;

    cout << "Insira o valor da hora de trabalho, a quantidade de horas trabalhadas e o tempo de servico em anos.\n";
    cin >> valorHora >> horasTrabalhadas >> tempoServico;

    bonus_tempo_servico(tempoServico, SalarioBase(valorHora, horasTrabalhadas));
    return 0;
}

float SalarioBase(float valor_da_hora, float horas_trabalhadas)
{
    float salarioBase = valor_da_hora * horas_trabalhadas;
    cout << "Salario base: " << salarioBase << endl;
    return salarioBase;
}

float bonus_tempo_servico(int ano_servico, float salarioBase)
{
    float bonus = salarioBase * (ano_servico * 0.02);
    cout << "Bonus: " << bonus << endl;
    return bonus;
}