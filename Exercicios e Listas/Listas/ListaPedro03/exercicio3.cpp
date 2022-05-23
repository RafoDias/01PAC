#include <iostream>
using namespace std;

int main()
{
    int n, valor, soma, produto = 1, count = 0;
    float media;

    cout << "Quantos inteiros serao inseridos?\n";
    cin >> n;
    while (count != n)
    {
        count++;
        cout << "Inteiro " << count << ": ";
        cin >> valor;
        soma += valor;
        produto *= valor;
        media = ((soma * 1.0) / count);
    }
    cout << "Soma: " << soma << "\nProduto: " << produto << "\nMedia: " << media;
    return 0;
}