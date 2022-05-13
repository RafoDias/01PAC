#include <iostream>
#include <cmath>

using namespace std;



float MaxEntreNFloats(int n)
{
	float valorAtual, maiorValor = -2147483648;
	cout << "Insira os " << n << " valores de interesse:\n";
	for (int i = 0; i < n; i++)
	{
        cin >> valorAtual;
        if (valorAtual > maiorValor) maiorValor = valorAtual;
	}
    return maiorValor;
}

int main()
{
	int x;
    float result;
	cout << "Entre quantos numeros serao comparados: ";
	cin >> x;
    result = MaxEntreNFloats(x);
    cout << "Maior valor: " << result;
	return 0;
}