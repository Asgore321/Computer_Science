#include <stdio.h>
#include <time.h>

int negativos(float *vet, int N);

void main(){
    float reais[50];
    int n;
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        reais[i] = (float) (rand() % 50) - 20;
        printf("reais[%d]: %.2f\n", i, reais[i]);
    }
    n = negativos(&reais, 50);
    printf("Existem %d numeros negativos nesse array", n);

    return ;
}

int negativos(float *vet, int N){
    int n = 0;
    for (int i = 0; i < N; i++)
    {
        if (*(vet + i) < 0)
        {
        n++;    
        }
    }
    return n;
}