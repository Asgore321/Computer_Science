#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, V, SP = 0.12, MG = 0.07, RJ = 0.15, MS = 0.08;
    int e;
    printf("Digite o valor do produto: ");
    scanf("%f", &v);
    printf("\nDigite o estado de destino: \n 1-SP \n 2-MG \n 3-RJ \n 4-MS \n ");
    scanf(" %d", &e);
    switch (e)
    {
    case 1:
        V = v*SP + v;
        printf("O valor do produto eh %.2f", V);
        break;
    case 2:
        V = v*MG + v;
        printf("O valor do produto eh %.2f", V);
        break;
    case 3:
        V = v*RJ + v;
        printf("O valor do produto eh %.2f", V);
        break;
    case 4:
        V = v*MS + v;
        printf("O valor do produto eh %.2f", V);
        break;
    default:
        printf("Estado incorreto");
        break;
    }
    return 0;
}
