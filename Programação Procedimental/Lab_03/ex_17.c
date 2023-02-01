#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bM, bm, h, a;
    printf("Digite os valores da base maior, da base menor, e da altura: ");
    scanf("%f %f %f", &bM, &bm, &h);
    if (bm > 0 && bM > 0 && h > 0)
    {
    a = ((bM + bm)*h)/2;
    printf("A area do trapezio eh %.2f", a);    
    } else {printf("Dados invalidos");}
    
    return 0;
}
