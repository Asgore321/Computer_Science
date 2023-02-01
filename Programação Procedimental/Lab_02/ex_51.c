#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    float x, y, z;
    printf("Digite a coordena x do ponto: ");
    scanf("%f", &x);
    printf("Digite a coordena y do ponto: ");
    scanf("%f", &y);
    z = sqrt((x*x)+(y*y));
    printf("A distancia da cordenada (%.1f,%.1f) da origem eh %.1f", x, y, z);
    return 0;
 }
 

