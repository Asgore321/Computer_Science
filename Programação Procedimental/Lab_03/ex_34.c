#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n;
    int f;
    printf("Digite a nota do aluno: ");
    scanf("%f", &n);
    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &f);
    if (n >= 9 && n <= 10)
    {
        if (f <= 20)
        {
            printf("O conceito do aluno eh A");
        }
        if (f > 20)
        {
            printf("O conceito do aluno eh B");
        }
    }
    if (n >= 7.5 && n < 9)
    {
        if (f <= 20)
        {
            printf("O conceito do aluno eh B");
        }
        if (f > 20)
        {
            printf("O conceito do aluno eh C");
        }
    }
    if (n >= 5 && n < 7.5)
    {
        if (f <= 20)
        {
            printf("O conceito do aluno eh C");
        }
        if (f > 20)
        {
            printf("O conceito do aluno eh D");
        }
    }
    if (n >= 4 && n < 5)
    {
        if (f <= 20)
        {
            printf("O conceito do aluno eh D");
        }
        if (f > 20)
        {
            printf("O conceito do aluno eh E");
        }
    }
    if (n >= 0 && n < 4)
    {
        printf("O conceito do aluno eh E");
    }
    return 0;
}
