#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    int vetor[10]; 
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 1000;
        printf("O valor da posicao do vetor[%d] eh %d \n", i, vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {   
        if (vetor[i] == 2 || vetor[i] == 3 || vetor[i] == 5 || vetor[i] == 7)
        {
            printf("O vetor de posicao vetor[%d] e valor %d eh primo \n", i, vetor[i]);
        }else
        {
        if (vetor[i] % 2 != 0 && vetor[i] % 3 != 0 && vetor[i] % 5 != 0 && vetor[i] % 7 != 0)
        {
            printf("O vetor de posicao vetor[%d] e valor %d eh primo \n", i, vetor[i]);
        }
        }
    }
}