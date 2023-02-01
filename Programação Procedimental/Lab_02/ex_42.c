#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sb, sn;
    printf("Digite o valor do salario Base: ");
    scanf("%f", &sb);
    sn = sb - (sb * 0.02);
    printf("\n O valor do salario a receber eh: R$%f \n", sn);
    return 0;
}
