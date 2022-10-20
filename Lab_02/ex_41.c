#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ht, vh, tp;
    printf("Digite o valor da hora trabalhada e o numero de horas trabalhadas: ");
    scanf("%f %f", &vh, &ht);
    tp = 1.10*(ht * vh);
    printf("\n O valor do salario a receber eh: R$%f \n", tp);
    return 0;
}
