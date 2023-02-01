#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);
    if (x == y)
    {
        printf("Os numeros sao iguais");
    } else {if (x > y)
    {
        printf("O numero %.1f eh o maior", x);
    } else {printf("O numero %.1f eh o maior", y);}
    }
        
    return 0;
}
