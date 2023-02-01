#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int vetor[5]; 
    srand(time(NULL));
    int posicao_maior =  -101, posicao_menor = 101;
    int pp_maior, pp_menor;
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 100;
    }
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > posicao_maior)
        {
            posicao_maior = vetor[i];
            pp_maior = i;
        }
        if (vetor[i] < posicao_menor)
        {
            posicao_menor = vetor[i];
            pp_menor = i;
        }
        
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("A vetor[%d] tem o valor: ", i);
        printf("%d \n", vetor[i]);
    }

    printf("A posicao do menor eh %d e a do maior eh %d", pp_menor, pp_maior);
    return;
}