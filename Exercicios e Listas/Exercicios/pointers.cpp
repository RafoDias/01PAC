/*
https://youtu.be/2ybLD6_2gKM

Memória possui dois atributos: Um endereço e um valor.
    Um endereço é um local, indicando aonde se encontra
    E o valor é o que há armazenado neste local.

Um ponteiro é quando o valor armazenado em um endereço é, justamente, outro endereço.

int x = 4; < declara uma variável com o tamanho int (4 bytes) e atribui a ela o valor 4.
int * pX = &x; < O * modifica o tipo int, indicando que essa variável não é uma int, mas um ponteiro que aponta para uma int.
                < O & significa "o endereço de". Nesse caso, podemos traduzir essa declaração como:

                    pX é um ponteiro de integer cujo valor é o endereço de x.
                    int* > indica que a variável é um ponteiro
                    pX > É o nome da variável.
                    = > operador de atribuição
                    & > Operador que indica que se está usando o endereço de algo, ao invés do valor

Considerando que possuímos uma variável que é um ponteiro para o endereço de x, para atribuirmos o valor de x a uma nova variável podemos, então:
int y = *pX; // Quando não está próximo de um tipo, o * atua como um "get". Ele serve para buscar e pegar o valor no endereço para qual pX está apontando.
        Nesse caso, y será igual a 4.
*/