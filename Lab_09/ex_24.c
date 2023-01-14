#include <stdio.h>
#include <stdlib.h>

void array_maxmin(int *V, int *max, int *min, int tam);

int main(){
    int *V, max = 0, min = 0;
    int tam;
    V = (int *) malloc(1*sizeof(int));
    printf("Quantos elementos o array vai ter?\n");
    scanf("%d", &tam);
    V = (int *) realloc(V, tam*sizeof(int));
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor da posicao %d do array: ", i);
        scanf(" %d", (V + i));
    }
    printf("----Exec----\n");
    array_maxmin(V, &max, &min, tam);
    printf("O valor Maximo eh: %d \nO valor minimo eh : %d \n", max, min);

    return 0;
}

void array_maxmin(int *V, int *max, int *min, int tam){
    for (int i = 0; i < tam; i++)
    {
        if (*(V + i) > *max)
        {
            *max = *(V + i);
        }
        if (*(V + i) < *min || i == 0)
        {
            *min = *(V + i); 
        }
    }
    return ;
}