#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, d;
    printf("Digite o valor do produto\n");
    scanf("%f", &v);
    d = v*0.12;
    printf("O valor do produto com desconto eh %f", v-d);
    return 0;
}