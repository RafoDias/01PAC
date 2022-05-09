/*
Questão 1 - Dado três valores a, b e c para três retas, defina se é possível formar um triângulo

	Só existirá um triângulo se, e somente se, um de seus lados for maior que o valor absoluto da diferença dos outros dois lados E menor que a soma dos outros dois lados.
	Logo:
			(a > | b - c |) e (a < b + c)
			Isso deve ser válido para os três lados. Logo:
				| b - c | < a < (b + c)
				| a - c | < b < (a + c)
				| a - b | < c < (a + b)

        Testes:
        a = 5, b = 10, c = 9 -> VERDADEIRO
        a = 8, b = 3, c = 4 -> FALSO 
        a = 3, b = 4, c = 5 -> VERDADEIRO
        a = 15, b = 12, c = 9 -> VERDADEIRO
        a = 30, b = 10, c = 15 -> FALSO
*/
#include <iostream>
#include <cmath>

using namespace std;

int valor_absoluto_diff(int, int);
bool checar_maior_que_diff(int, int, int);

int main(){
    int a, b, c;

    cout << "Insira os lados do triangulo a ser formado\n";
    cin >> a >> b >> c;
    
    bool triangulo_existe = false;

    if (a < valor_absoluto_diff(b, c) && b < valor_absoluto_diff(a, c) && c < valor_absoluto_diff(a, b));
    {
        triangulo_existe = checar_maior_que_diff(a, b, c);
    }

    if (triangulo_existe == true)
    {
        cout << "O triangulo e possivel com estes tres lados\n";
        return 0;
    }

    cout << "O triangulo NAO e possivel com estes tres lados";
    return 0;
}

int valor_absoluto_diff(int d1, int d2)
{
    int diff = d2 - d1;
    if (diff < 0) return -diff;
    else return diff;
}
bool checar_maior_que_diff(int d1, int d2, int d3)
{
    if ((d1 < (d2 + d3)) && (d2 < (d1 + d3)) && (d3 < (d2 + d1)))
    {
        return true;
    }
    return false;
}