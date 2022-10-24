#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x;
     printf("Digite um numero inteiro que deseja saber se e divisivel por 3 ou 5: ");
     scanf("%d", &x);
     if ( x%3 == 0 || x%5 == 0)
     {
        if (x%3 == 0 && x%5 == 0)
        {
            printf("Nao pode ser divisivel pelos dois simultaneamente");
        } else {printf("O numero eh divisivel por 3 ou 5");}
        ;
     } else {printf("Esse numero nao eh divisivel por 3 ou 5");}
     
    return 0;
}
