#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, m;
    printf("Digite o valor de area em acres que deseja converter para metros quadrados\n");
    scanf("%f", &a);
    m = a*4048.58;
    printf("Em metros quadrados temos %f", m);
    return 0;
}
