#include <iostream>
#include <iomanip> // Formatação detalhada para o cout

using namespace std;

void Tabuada(int n)
{
    int size = (n); // Variavel auxiliar para o n
    int cont = 1; // Contador de espaços usados. Todo número tem pelo menos 1 algarismo.

    while (size > 0)
    {
        // Contando quantos algarismos tem o numero.
        // Nota: Como a tabuada é até 10, o maior numero a ser impresso tem sempre 1 algarismo a mais que n.
        // Todos os valores entrarão nesse loop pelo menos 1x por conta disso, exceto o zero.
        size = size / 10;
        cont++;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            /* Formatando a impressao:
                    setw define o tamanho de cada impressão naquele comando cout.
                    left define que as variáveis devem ser impressas à esquerda e os preenchimentos à direita
                    É necessário usar a biblioteca <iomanip> e os comandos std para esse tipo de formatação.
            */
            std::cout << std::setw(cont) << std::left << (i*j);
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    Tabuada(n);

    return 0;
}