#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, p;
    printf("Digite o valor em polegadas que deseja converter para centimetros\n");
    scanf("%f", &p);
    c = p*2.54;
    printf("O valor em centimetros eh %f", c);
    return 0;
}
