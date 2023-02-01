#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, xx, rx;
    printf("Digite um numero: ");
    scanf("%f", &x);
    if (x >= 0)
    {
        xx = x*x;
        rx = sqrt(x);
        printf("\n O numero ao quadrado eh: %.1f \n A raiz do numero eh: %f", xx, rx);
    }
     
    return 0;
}
