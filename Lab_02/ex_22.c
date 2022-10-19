#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j, m;
    printf("Digite o valor de comprimento em jardas que deseja converter para metros\n");
    scanf("%f", &j);
    m = 0.91*j;
    printf("Em metros temos %f", m);
    return 0;
}