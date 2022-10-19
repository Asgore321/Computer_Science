#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, c;
    printf("Digite a temperatura em Celsius que deseja converter\n");
    scanf("%f", &c);
    k = c+273.15;
    printf("%f", k);
    return 0;
}
