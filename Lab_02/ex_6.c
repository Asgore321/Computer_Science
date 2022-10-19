#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c , f;
    printf("Digite a temperatura em Celsiu que deseja converter\n");
    scanf("%f", &c);
    f = c*(9.0/5.0)+32.0;
    printf("%f", f);
    return 0;
}
