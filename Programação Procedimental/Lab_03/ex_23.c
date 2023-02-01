#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Digite o ano que deseja saber: ");
    scanf(" %d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("O ano %d e bissexto", a);
    } else {printf("O ano %d nao e bissexto", a);}
       return 0;
}