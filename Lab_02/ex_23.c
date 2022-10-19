#include <stdio.h>
#include <stdlib.h>

int main()
{
    float j, m;
    printf("Digite o valor de comprimento em metros que deseja converter para jardas\n");
    scanf("%f", &m);
    j = m/0.91;
    printf("Em jardas temos %f", j);
    return 0;
}