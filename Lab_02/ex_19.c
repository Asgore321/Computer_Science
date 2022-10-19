#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, m;
    printf("Digite o volume em litros que deseja converter para metros cubicos\n");
    scanf("%f", &l);
    m = l/1000;
    printf("Em metros cubicos temos %fm3", m);
    return 0;
}