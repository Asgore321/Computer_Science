#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, p;
    printf("Digite o comprimento em centimetros que deseja converter para polegadas\n");
    scanf("%f", &c);
    p = c/2.54;
    printf("Em polegadas temos %f", p);
    return 0;
}

