#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int x, y, soma;
    int strg[8];
    srand(time(NULL));
    for (int i = 0; i < 8; i++)
    {
        strg[i] = rand() % 100;
        printf("O valor da posicao strg[%d] eh %d \n", i, strg[i]);
    }
    printf("Digite os valores de x e y de 0 ate 7: ");
    scanf(" %d %d", &x, &y);
    if ( x >= 0 || x < 8 || y >= 0 || y < 8)
    {
        soma = strg[x] + strg[y];
        printf("A soma das posicoes strg[%d] e strg[%d] eh %d", x, y, soma);
    } else {printf("Numeros invalidos");}
    

    return;
}