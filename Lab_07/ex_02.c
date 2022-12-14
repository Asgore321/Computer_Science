#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int binarios[100];
    int contador = 0;
    srand(time(NULL));
    for (int i = 0; i < 99; i++)
    {
        binarios[i] = rand() % 2;
        printf("%d", binarios[i]);
        if (binarios[i] == 1)
        {
            contador++;
        }
    }
    printf("\nExistem %d numeros 1's nessa sequencia", contador);
    

    return ;
}