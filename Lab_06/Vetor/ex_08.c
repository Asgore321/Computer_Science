#include <stdio.h>

void main(){
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor do vetor de endereco vetor[%d]: ", i);
        scanf(" %d", &vetor[i]);
        for (int k = 0; k < i; k++)
        {
            if (i != 0)
            {
                if (vetor[i] == vetor[k])
                {
                    printf("Digite outro valor: ");
                    scanf(" %d", &vetor[i]);
                    k = -1;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("O valor do vetor[%d] eh %d \n", i, vetor[i]);
    }
    
    
    return;
}