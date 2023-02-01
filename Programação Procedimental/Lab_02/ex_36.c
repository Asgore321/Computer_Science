#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.14159;
    float h, r, v;
    printf("Digite o valor do raio e da altura, respectivamente, do cilindro\n");
    scanf("%f %f", &r, &h);
    v = pi*(r*r)*h;
    printf("O valor do volume do cilindro eh %f", v);
    return 0;
}
