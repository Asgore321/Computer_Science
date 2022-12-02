#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM_MAX 4

void muda_matriz(int Tam ,int Mat[TAM_MAX][TAM_MAX]);

void main(){
    int matriz[TAM_MAX][TAM_MAX];
    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            matriz[i][k] = (rand() % 20) + 1;
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
    printf("--------------------------------------------------------------------------------------------------------------\n");
    
    muda_matriz(TAM_MAX , matriz);

    
    return;
}

void muda_matriz(int Tam ,int Mat[Tam][Tam]){
    for (int i = 0; i < Tam; i++)
    {
        for (int k = 0; k < Tam; k++)
        {
            if (i == 0 || (i == 1 && k >= i) || (i == 2 && k >= i) || (i == 3 && k >= i))
            {
                Mat[i][k] = 0;
            }
            
        }
    }
    for (int i = 0; i < Tam; i++)
    {
        for (int k = 0; k < Tam; k++)
        {
            printf("A matriz[%d][%d] vale: %d    ", i, k, Mat[i][k]);
        }
        printf("\n");
    } 
    
    return;
}

