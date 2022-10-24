#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite o numero para descobrir o mes correspondente: ");
    scanf("%d", &x);
    switch ( x )
    {
    case 1:
        printf("O mes eh Janeiro");
        break;
    case 2:
        printf("O mes eh Fevereiro");
        break;
    case 3:
        printf("O mes eh Março");
        break;
    case 4:
        printf("O mes eh Abril");
        break;
    case 5:
        printf("O mes eh Maio");
        break;
    case 6:
        printf("O mes eh Junho");
        break;
    case 7:
        printf("O mes eh Julho");
        break;
    case 8:
        printf("O mes eh Agosto");
        break;
    case 9:
        printf("O mes eh Setembro");
        break;
    case 10:
        printf("O mes eh Outubro");
        break;
    case 11:
        printf("O mes eh Novembro");
        break;
    case 12:
        printf("O mes eh Dezembro");
        break;
    default:
        printf("Numero invalido");
        break;
    }
    return 0;
}
