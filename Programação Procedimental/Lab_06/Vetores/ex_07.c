#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int vetor[6], pares[6], impares[6];
    int contador_p = 0, contador_i = 0;
    int soma_p = 0;
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        vetor[i] = rand() % 1000;
    }
    for (int i = 0; i < 6; i++)
    {
        vetor[i] = rand() % 1000;
        printf("O valor da posicao do vetor[%d] eh %d \n", i, vetor[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("O numero no vetor[%d] eh par de valor: %d \n", i, vetor[i]);
            pares[contador_p] = vetor[i];
            contador_p++;
        }else{
            printf("A vetor[%d] eh impar e tem o valor: %d \n", i, vetor[i]);
            impares[contador_i] = vetor[i];
            contador_i++;
        }
    }
    for (int i = 0; i < contador_p; i++)
    {
        soma_p = soma_p + pares[i];
    }
        printf("Esse vetor tem %d numeros impares. \n", contador_i);
        printf("A soma dos numeros pares eh: %d \n", soma_p);

    return;
}