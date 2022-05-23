#include <iostream>

using namespace std;

float calcula_media(float a, float b)
{
    return (a+b)/2.0;
}

int main()
{
    int matricula;
    float pr1, pr2, tr1, tr2, mdpr, mdtr, mdf;
    printf("Insira a Matricula ou zero ('0') para sair: ");
    scanf("%d", &matricula);
    while (matricula != 0)
    {
        printf("Nota da primeira prova: ");
        scanf("%f", &pr1);
        printf("Nota da segunda prova: ");
        scanf("%f", &pr2);
        printf("Nota do primeiro trabalho: ");
        scanf("%f", &tr1);
        printf("Nota do segundo trabalho: ");
        scanf("%f", &tr2);
        mdpr = calcula_media(pr1, pr2);
        mdtr = calcula_media(tr1, tr2);
        mdf = calcula_media(mdpr, mdtr);
        printf("-----------------------------\n");
        printf("Matricula: %d\nMedia provas: %f || Media trabalhos: %f || Media final: %f\n-----------------------------\n", matricula, mdpr, mdtr, mdf);
        printf("Insira a Matricula ou zero ('0') para sair: ");
        scanf("%d", &matricula);
    }
    return 0;
}