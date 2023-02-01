#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; 
    printf("Digite um numero entre um 1 eh 7: ");
    scanf("%d", &x);
    switch ( x )
    {
    case 1:
        printf("Corresponde a Domingo\n");
        break;
    case 2:
        printf("Corresponde a Segunda\n");
        break;
    case 3:
        printf("Corresponde a Terca\n");
        break;
    case 4:
        printf("Corresponde a Quarta\n");
        break;
    case 5:
        printf("Corresponde a Quinta\n");
        break;
    case 6:
        printf("Correspode a Sexta\n");
        break;
    case 7:
        printf("Corresponde a Sabado\n");
        break;
    default: printf("Numero invalido\n");
        break;
    }
    return 0;
}
