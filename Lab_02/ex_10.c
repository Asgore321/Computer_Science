#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, m;
    printf("Digite a velocidade em km/h que deseja converter\n");
    scanf("%f", &k);
    m = k/3.6;
    printf("%f", m);
    return 0;
}
