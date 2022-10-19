#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, m;
    printf("Digite o valor de area em hectares que deseja converter para metros quadrados\n");
    scanf("%f", &h);
    m = h*10000;
    printf("Em metros quadrados temos %f", m);
    return 0;
}