#include <iostream>
using namespace std;

int main()
{
    int n, soma, produto = 1, count = 0;
    float media;

    cout << "Insira valores inteiros ou '0', para sair:\n";
    cin >> n;
    while (n != 0)
    {
        count++;
        soma += n;
        produto *= n;
        media = ((soma * 1.0) / count);
        cin >> n;
    }
    cout << "Soma: " << soma << "\nProduto: " << produto << "\nMedia: " << media;
    return 0;
}