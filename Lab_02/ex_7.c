#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("Digite a temperatura em Fahrenheit que deseja converter\n");
    scanf("%f", &f);
    c = 5.0*(f- 32.0)/9.0;
    printf("%f", c);
    return 0;
}
