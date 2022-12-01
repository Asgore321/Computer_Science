#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int strg[5];
    srand(time(NULL));
    int posicao_maior =  -101, posicao_menor = 101;
    int pp_maior, pp_menor;
    for (int i = 0; i < 5; i++)
    {
        strg[i] = rand() % 100;
    }
    for (int i = 0; i < 5; i++)
    {
        if (strg[i] > posicao_maior)
        {
            posicao_maior = strg[i];
            pp_maior = i;
        }
        if (strg[i] < posicao_menor)
        {
            posicao_menor = strg[i];
            pp_menor = i;
        }
        
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("A strg[%d] tem o valor: ", i);
        printf("%d \n", strg[i]);
    }

    printf("A posicao do menor eh %d e a do maior eh %d", pp_menor, pp_maior);
    return;
}