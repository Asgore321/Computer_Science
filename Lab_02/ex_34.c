#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592;
    float r, a;
    printf("Digite o valor do raio do circulo\n");
    scanf("%f", &r);
    a = pi*(r*r);
    printf("Esse eh a area do circulo corresponde %f", a);
    return 0;
}
