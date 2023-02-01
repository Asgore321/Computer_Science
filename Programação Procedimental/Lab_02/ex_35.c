#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ca, cb, h;
    printf("Digite os valores dos catetos\n");
    scanf("%f %f", &ca, &cb);
    h = sqrt((ca*ca)+(cb*cb));
    printf("O valor da hipotenusa eh %f", h);
    return 0;
}
