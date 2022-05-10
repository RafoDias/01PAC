/*
    Para rodar este programa, você deve executar o programa na lista de comando seguido
    de um argumento de linha de comando. Neste caso, o argumento será "-" + o número da questao
    que o usuario deseja calcular, dentro do exercicio 3 da lista 1. Por exemplo:
            ./exercicio3.exe 3
    Ao inserir o comando acima no terminal, aberto na pasta correta, o o programa deve
    calcular o resultado da conta (10/3.0).
*/
/*
    OBSERVAÇÃO: Aproveitei apenas para praticar argumentos de função e linha de comando.

    NÃO É NECESSÁRIO usar argc e argv para fazer esse exercício, nem condicionais.

    Mas achei que seria legal praticar;
*/

#include <iostream>
using namespace std;

/* Como não é possível comparar strings em C/C++ por meio do operador ==,
    Pode-se optar por outras soluções, como:
        - A função (strcmp(argv[1], string) == 9);
        - argv[1][0] retorna o char, possível no caso de uma string com apenas 1 char;
        - em C++: (argv[1] == std::string(string));
*/
char getArgv; 

int main(int argc, // Numero de strings no array argc
            char* argv[]) // Array de strings de argumentos de linha de comando
{
    printf("\nNumber of arguments passed: %d", argc);
    printf("\n----Following are the command line arguments passed----\n");
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    getArgv = argv[1][0];

    if (argc != 2)
    {
        cout << "Quantidade invalida de argumentos.\n";
        return 0;
    }
    if (argv[1] == std::string("1")) // 4 * 18 - 198 % 10
    {
        double result = 4 * 18 - 198 % 10;
        cout << "O resultado e: " << result << endl;
        return 0;
    }
    else if (argv[1][0] == '2') // (10/3) ->
    {
        int resultInt = 10/3;
        float resultFloat = 10/3;
        cout << "O resultado em int e: " << resultInt << endl;
        cout << "O resultado em float e: " << resultFloat << endl;
        return 0;
    }
    else if (getArgv == '3') // (10/3.0)
    {
        int resultInt = 10/3.0;
        float resultFloat = 10/3.0;
        cout << "O resultado em int e: " << resultInt << endl;
        cout << "O resultado em float e: " << resultFloat << endl;
        return 0;
    }
    else if (getArgv == '4') // a = d; b = c = d; para int a, b, c, d = 123;
    {
        int a, b, c, d = 123;
        a = d;
        b = c = d;
        cout << "Os valores de a, b, c e d, respectivamente, sao: \n";
        cout << a << ", " << b << ", " << c << ", " << d;
        return 0;
    }
    else if (getArgv == '5') // Confere na lista...
    {
        int a, b;
        a = 10;
        a = a + 3;
        b = 10;
        b += 3;
        cout << "a: " << a << "\nb: " << b;
        return 0;
    }
    else if (getArgv == '6') // Confere na lista...
    {
        int a,b;
        a = 10;
        a = a - 3;
        b = 10;
        b -= 3;
        cout << "a: " << a << "\nb: " << b;
        return 0;
    }
    else if (getArgv == '7') // Confere na lista...
    {
        int a;
        double b = 3.3;
        a = b;
        cout << "a: " << a << "\nb: " << b;
        return 0;
    }
    
    cout << "O argumento especificado nao e valido";
    return 0;
}