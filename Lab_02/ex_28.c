#include <stdio.h>
#include <stdlib.h>
 int main()
 {
    float x, y, z, s;
    printf("Digite tres valores que deseja obter a soma dos quadrados\n");
    scanf("%f %f %f", &x, &y, &z);
    s = (x*x)+(y*y)+(z*z);
    printf("A soma dos quadrados eh %f", s);
    return 0;
 }
 