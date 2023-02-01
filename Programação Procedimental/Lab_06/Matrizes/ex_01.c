#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int matriz[4][4];
    int contagem = 0;
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            matriz[i][k] = rand() % 50;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("A matriz[%d][%d] vale: %d \n", i, k, matriz[i][k]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (matriz[i][k] > 10)
            {
                contagem++;
            }
        }
    }
    printf("Existem %d numeros maiores que 10 nessa matriz.", contagem);
    return;
}