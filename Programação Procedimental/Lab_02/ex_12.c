#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M, k;
    printf("Digite a distancia em milhas que deseja converter\n");
    scanf("%f", &M);
    k = 1.61*M;
    printf("%f", k);
    return 0;
}
