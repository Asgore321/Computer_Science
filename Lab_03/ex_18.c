#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    float x, y, r;
    printf("Escolha uma das operacoes:\n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n  ");
    scanf("%d", &p);
    switch ( p )
    {
    case 1:
        printf("Digite os dois numeros para somar: ");
        scanf("%f %f", &x, &y);
        r = x + y;
        printf("%.2f + %.2f = %.2f", x, y, r);
        break;
    case 2:
        printf("Digite os dois numeros que deseja subtrair: ");
        scanf("%f %f", &x, &y);
        r = x - y;
        printf("%.2f - %.2f = %.2f", x, y, r);    
        break;
    case 3:
        printf("Digites os dois numeros que deseja multiplicar: ");
        scanf("%f %f", &x, &y);
        r = x * y;
        printf("%.2f * %.2f = %.2f", x, y, r);
        break;
    case 4:
        printf("Digites o dividendo e o divisor: ");
        scanf("%f %f", &x, &y);
        r = x / y;
        printf("%.2f / %.2f = %.2f", x, y, r);
        break;
    
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}

