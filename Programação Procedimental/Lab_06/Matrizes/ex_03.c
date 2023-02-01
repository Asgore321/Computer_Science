#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int matriz[4][4];
    int linha = 0, coluna = 0, maior = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            matriz[i][k] = rand() % 1000;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            printf("A matriz[%d][%d] vale: %d    ", i, k, matriz[i][k]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (matriz[i][k] > maior)
            {
                maior = matriz[i][k];
                linha = i;
                coluna = k;
            }
            
        }
        
    }
    printf("O maior numero eh matriz[%d][%d] de valor: %d ", linha, coluna, maior);
    

    return;
}