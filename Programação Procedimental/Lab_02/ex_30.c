#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float c = 5.28;
    float r, d;
    printf("Digite o valor em reais que deseja converter para dolar\n");
    scanf("%f", &r);
    d = r/c;
    printf("Em dolares eh %f", d);
    return 0;
}

