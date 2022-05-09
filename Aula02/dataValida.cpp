/* 
	Questão:

		Dado uma data, diga se o dia, mês e ano configuram uma data válida
	
	int dia,mes,ano
	cin >> dia >> mes >> ano
	
	if (mes < 13 && mes > 0) && mes != 2 && dia <= 30
			valido
			
	elif mes == 2 && dia <= 28
			valido
			
	elif mes == 2 && (ano bissexto) && dia <= 29
			valido
			
	elif mes == (1 || 3 || 5 || 7 || 8 || 10 || 12) && dia <= 31
		valido
		
	else
		invalido
	()
*/

#include <iostream>
#include <cmath>

using namespace std;

int dataCompleta;
int dia, mes, ano;

bool checar_bissexto(int);

int main()
{

	cout << "Insira a data no formato ddmmaaaa\n";
	cin >> dataCompleta;

	// Separar a data ddmmaaaa em dia, mes e ano
	ano = dataCompleta % 10000;
	mes = (dataCompleta / 10000) % 100;
	dia = (dataCompleta / 1000000);

	cout << "Dia: " << dia << "\nMes: " << mes << "\nAno: " << ano << endl;
	bool bissexto;

	if ((dia > 0 && dia < 32) && (mes > 0 && mes < 13) && ano > 0) // Checa a validade geral da data, antes das específicas
	{
		bissexto = checar_bissexto(ano); // Checa se o ano é bissexto ou não

		if ((mes == 2 && bissexto == true && dia < 30) || (mes == 2 && dia < 29)) // Checar validez para fevereiro
		{
			cout << "A data inserida e valida";
			return 0;
		}
		else if (mes != 2 && dia < 31) // Para qualquer mês que não seja fevereiro, data é válida até o dia 30
		{
			cout << "A data inserida e valida";
			return 0;
		}
		else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia < 32) // 31 ou menos dias para os meses com 31 dias
		{
			cout << "A data inserida e valida";
			return 0;
		}
		else // Se não se encaixa nos casos acima, a data é inválida
		{
			cout << "A data inserida nao e valida";
			return 0;
		}
		
	}
	
	// Se não se encontrar em uma data geral válida;
	cout << "A data inserida nao e valida";
	return 0;
}

bool checar_bissexto(int numero)
{
	if ((numero % 4 == 0) && ((numero % 100 != 0) || (numero % 400 == 0)))
	{
		return true;
	}
	
	return false;
}