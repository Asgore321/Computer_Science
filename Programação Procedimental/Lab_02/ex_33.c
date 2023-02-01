#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, a;
    printf("Digite o lado do quadrado que deseja descobrir a area\n");
    scanf("%f", &x);
    a = x*x;
    printf("A area eh %f", a);
    return 0;
}
