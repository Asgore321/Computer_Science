#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, m;
    printf("Digite o valor de area em metros quadrados que deseja converter para acres\n");
    scanf("%f", &m);
    a = m*0.000247;
    printf("Em acres temos %f", a);
    return 0;
}