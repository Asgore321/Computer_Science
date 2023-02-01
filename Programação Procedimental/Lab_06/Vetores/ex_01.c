#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int x_, int y_, int z_);

void main(){
    int vetor[6] = {1,0,5,-2,-5,7};
    printf("O valor da soma eh %d \n",soma_vetor(vetor[1], vetor[0], vetor[5]));
    vetor[4] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf("O valor da posicao vetor[%d] eh %d \n", i, vetor[i]);
    }

    return;
}

int soma_vetor(int x_, int y_, int z_){
    int x;
    x = x_ + y_ + z_;
    return x;
}

