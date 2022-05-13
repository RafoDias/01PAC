#include <iostream>
#include <cmath>

using namespace std;

int HorarioEmMinutos(int hora, int minutos)
{
    int minutoDoDia = minutos + (hora * 60);

    return minutoDoDia;
}

int MinutosEntreChegadas(int horaPrev, int minutosPrev, int horaCheg, int minutosCheg)
{
    int totalPrevisto, totalChegada, diferenca;
    totalPrevisto = HorarioEmMinutos(horaPrev, minutosPrev);
    totalChegada = HorarioEmMinutos(horaCheg, minutosCheg);
    diferenca = totalChegada - totalPrevisto;

    if (diferenca < 0)
    {
        diferenca *= -1;
        cout << "O voo chegou " << diferenca << " minutos antes do previsto.";
    }
    else cout << "O voo chegou " << diferenca << " minutos depois o previsto.";
    
    return diferenca;
}


int main()
{
    int horaPrevista, horaChegada;

    cout << "Insira o horario previsto de chegada e o horario efetivo de chegada no formato hhmm\nPrevisto: ";
    cin >> horaPrevista;
    cout << "Chegada: ";
    cin >> horaChegada;

    int h1, m1, h2, m2;
    h1 = horaPrevista / 100;
    m1 = horaPrevista % 100;
    h2 = horaChegada / 100;
    m2 = horaChegada % 100;

    if ((h1 > 23) || (h2 > 23) || (m1 > 59) || (m2 > 59))
    {
        cout << "O valor da hora ou dos minutos nao e valido"; 
        return 1441;
    }

    return MinutosEntreChegadas(h1, m1, h2, m2);
}