#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m, k;
    printf("Digite a velocidade em m/ s que deseja converter\n");
    scanf("%f", &m);
    k = m*3.6;
    printf("%f", k);
    return 0;
}
