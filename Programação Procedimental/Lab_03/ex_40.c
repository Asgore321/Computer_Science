#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cf, cd, ci, cc;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &cf);
    if (cf <= 12000)
    {
        cd = 0.05;
        ci = 0;
    }
    if (cf > 12000 && cf <= 25000)
    {
        cd = 0.10;
        ci = 0.15;
    }
    if (cf > 25000)
    {
        cd = 0.15;
        ci = 0.20;
    }
    cc = cf + (cf * cd) + (cf * ci);
    printf("O custo ao consumidor eh de %.2f", cc);
    return 0;
}
