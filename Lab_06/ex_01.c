#include <stdio.h>
#include <stdlib.h>

int soma_strg(int x_, int y_, int z_);

void main(){
    int strg[6] = {1,0,5,-2,-5,7};
    printf("O valor da soma eh %d \n",soma_strg(strg[1], strg[0], strg[5]));
    strg[4] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf("O valor da posicao strg[%d] eh %d \n", i, strg[i]);
    }

    return;
}

int soma_strg(int x_, int y_, int z_){
    int x;
    x = x_ + y_ + z_;
    return x;
}

