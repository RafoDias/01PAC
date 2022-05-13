#include <iostream>
#include <cmath>

using namespace std;

int MinutoDoDia(int hora, int minutos)
{
    if ((hora > 23) || (minutos > 59)) { cout << "O valor da hora ou dos minutos nao e valido"; return 0;}
    
    int minutoDoDia = minutos + (hora * 60);

    cout << "O minuto do dia referente ao horario passado e: " << minutoDoDia << endl;
    return minutoDoDia;
}

int main()
{
    int hora, minutos;
    cout << "Insira a hora e os minutos de um horario qualquer:\n" << "Hora: ";
    cin >> hora;
    cout << "Minutos: ";
    cin >> minutos;
    
    MinutoDoDia(hora, minutos);
    
    return 0;
}