#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, c;
    printf("Digite a temperatura em Kelvin que deseja converter\n");
    scanf("%f", &k);
    c = k-273.15;
    printf("%f", c);
    return 0;
}
