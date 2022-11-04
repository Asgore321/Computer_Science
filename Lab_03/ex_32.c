#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, q;
    float p;
    printf("Digite o código do produto: ");
    scanf("%d", &);
    printf("Digite a quantidade: ");
    scanf("%d", &q);
    switch (c)
    {
        case 100:
            p = 1.20;
            break;
        case 101:
            p = 1.30;
            break;
        case 102:
            p = 1.50;
            break;
        case 103:
            p = 1.20;
            break;
        case 104:
            p = 1.70;
            break;
        case 105:
            p = 2.20;
            break;
        case 106:
            p = 1.00;
            break;
        default:
            printf("Código inválido!");
            exit(0);
    }
    printf("Total: R$ %.2f", p * q);
    return 0;
}