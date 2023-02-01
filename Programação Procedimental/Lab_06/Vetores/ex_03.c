#include <stdio.h>

void main(){
    int vetor[6];
    printf("Digite 6 valores: ");
    scanf(" %d %d %d %d %d %d", &vetor[5], &vetor[4], &vetor[3], &vetor[2], &vetor[1], &vetor[0]);
    printf("A ordem inversa eh ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return;
}