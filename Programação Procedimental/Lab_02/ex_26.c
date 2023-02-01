#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, m;
    printf("Digite o valor de area em metros quadrados que deseja converter para hectares\n");
    scanf("%f", &m);
    h = m*0.0001;
    printf("Em hectares temos %f", h);
    return 0;
}