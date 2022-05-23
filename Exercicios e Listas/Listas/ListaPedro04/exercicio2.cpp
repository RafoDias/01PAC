#include <iostream>
using namespace std;

int QuestaoA()
{
    int n, fatorial = 1;
    cout << "Insira um valor inteiro: ";
    cin >> n;
    if (n == 0) return fatorial;
    do
    {
        fatorial *= n;
        n--;
    } while (n > 1);
    return fatorial;
}
int QuestaoB()
{
    int n, fatorial = 1;
    cout << "Insira um valor inteiro: ";
    cin >> n;
    while (n > 1)
    {
        fatorial *= n;
        n--;
    }
    return fatorial;
}
int QuestaoC()
{
    int n, fatorial = 1;
    cout << "Insira um valor inteiro: ";
    cin >> n;
    for (n; n > 1; n--) // Alternativamente, poderia ser for (int i = n; i > 1; i--) e fatorial *= i;
    {
        fatorial *= n;
    }
    return fatorial;
}

int main()
{
    char resposta;
    int resultado;
    do
    {
        cout << "Insira a, b ou c para escolher a questao ou s, para sair: ";
        cin >> resposta;
    } while (!(resposta == 'a' || resposta == 'b' || resposta == 'c' || resposta == 's'));

    if (resposta == 's') return 0;
    else if (resposta == 'a')
    {
        resultado = QuestaoA();
        cout << "Resultado: " << resultado << endl;
        return 0;
    }
    else if (resposta == 'b')
    {
        resultado = QuestaoB();
        cout << "Resultado: " << resultado << endl;
        return 0;
    }
    else
    {
        resultado = QuestaoC();
        cout << "Resultado: " << resultado << endl;
        return 0;
    }
}