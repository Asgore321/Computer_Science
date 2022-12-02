#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int matriz[5][5];
    int x = 0, linha = 0, coluna = 0;
    srand(time(NULL));
    printf("Digite um numero ate 100 para ser procurado: ");
    scanf(" %d", &x);
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            matriz[i][k] = rand() % 100;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("A matriz[%d][%d] vale: %d    ", i, k, matriz[i][k]);
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (matriz[i][k] == x)
            {
                linha = i;
                coluna = k;
                printf("O numero %d foi encontrado na matriz[%d][%d]", x, linha, coluna);
                return;
            }
        }
    }
    printf("O numero %d nao foi encontrado na matriz.", x);


    return;
}