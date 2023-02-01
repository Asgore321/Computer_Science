#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, pn;
    printf("Digite o preco antigo do produto: ");
    scanf("%f", &p);
    if (p <50)
    {pn = p + (p*0.05);}
    if (p >= 50 && p < 100)
    {pn = p + (p*0.1);}
    if (p >= 100)
    {pn = p + (p*0.15);}
    //Preço Novo
    if (pn < 80)
    {printf("O preco novo do produto eh: %.2f \nBarato", pn);}
    if (pn >= 80 && pn <= 120)
    {printf("O preco novo do produto eh: %.2f \nNormal", pn);}
    if (pn > 120 && pn <= 200)
    {printf("O preco novo do produto eh: %.2f \nCaro", pn);}
    if (pn > 200)
    {printf("O preco novo do produto eh: %.2f \nMuito Caro", pn);}

    return 0;
}
