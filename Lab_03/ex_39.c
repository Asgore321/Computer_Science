#include <stdio.h>
#include <stdlib.h>
int main()
{
    float st, sn, b, r;
    int as;
    printf("Digite o seu salario atual e os anos de servico: ");
    scanf("%f %d", &st, &as);
    if (st <=500)
    {
     r = 0.25;   
    }
    if (st > 500 && st <= 1000)
    {
        r = 0.20;
    }
    if (st > 1000 && st <= 1500)
    {
        r = 0.15;
    }
    if (st > 1500 && st <= 2000)
    {
        r = 0.10;
    }
    if (st > 2000)
    {
        r = 0;
    }
    if (as < 1)
        {
            b = 0;
        }
    if (as >= 1 && as <=3)
        {
            b = 100;
        }
    if (as >= 4 && as <= 6)
        {
            b = 200;
        }
    if (as >= 7 && as <= 10)
        {
            b = 300;
        }
    if (as >= 10)
        {
            b = 500;
        }
    sn = b + (st + (st * r));
    if (sn == st)
    {
        printf("Voce nao teve aumento");
    } else {printf("Seu novo salario eh de %.3f", sn);}
    
    
    return 0;
}
