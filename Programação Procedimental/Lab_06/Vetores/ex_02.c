#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int x, y, soma;
    int vetor[8];
    srand(time(NULL));
    for (int i = 0; i < 8; i++)
    {
        vetor[i] = rand() % 100;
        printf("O valor da posicao vetor[%d] eh %d \n", i, vetor[i]);
    }
    printf("Digite os valores de x e y de 0 ate 7: ");
    scanf(" %d %d", &x, &y);
    if ( x >= 0 || x < 8 || y >= 0 || y < 8)
    {
        soma = vetor[x] + vetor[y];
        printf("A soma das posicoes vetor[%d] e vetor[%d] eh %d", x, y, soma);
    } else {printf("Numeros invalidos");}
    

    return;
}