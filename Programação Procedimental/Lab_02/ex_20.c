#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, l;
    printf("Digite o valor de massa em quilogramas que deseja converter para libras\n");
    scanf("%f", &k);
    l = k/0.45;
    printf("Em libras temos %f", l);
    return 0;
}
