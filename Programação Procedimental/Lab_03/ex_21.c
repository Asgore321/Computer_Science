#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e;
    float x, y, r;
    printf(
        "Escolha uma das opcoes: \n 1 - Soma de 2 numeros \n 2 - Subtracao de dois numeros \n 3 - Produto entre dois numeros \n 4 - Divisao entre dois numeros \n");
        scanf("%d", &e);
    switch (e)
    {
    case 1:
        printf("Escolha os dois numeros que deseja somar: ");
        scanf("%f %f", &x, &y);
        r = x + y; 
        printf("%.2f", r);
        break;
    case 2:
        printf("Escolha os dois numeros que deseja subtrair(maior pelo menor): ");
        scanf("%f %f", &x, &y);
        if ( x > y)
        {
            r = x - y;
            printf("%f", r);
        } else { r = y - x;
                printf("%f", r);}
        break;
    case 3:
        printf("Digite os numeros que deseja multiplicar: ");
        scanf("%f %f", &x, &y);
        r = x * y;
        printf("%.2f", r);
        break;
    case 4:
        printf("Digite os numeros que deseja dividir: ");
        scanf("%f %f", &x, &y);
        if (x != 0 && y!= 0)
        {
            if ( x > y)
            {
                r = x / y;
                printf("%.2f", r);
            } else { r = y / x;
            printf("%.2f", r);}
            
        } else {printf("Numeros invalidos");}
        break; 
    default: printf("Numero invalidos");
        break;
    }
    return 0;
}
