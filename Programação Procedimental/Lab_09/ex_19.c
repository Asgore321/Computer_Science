#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void lyze_array(int array[],int tam, int *maior, int *vezes);

void main(){
    int array[50];
    int maior, vezes;
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        array[i] = rand() % 20;
        printf("array[%d] eh : %d \n", i, array[i]);
    }
    lyze_array(array, 50,&maior, &vezes);
    printf("O MAIOR EH: %d\nAPARECE %d VEZES", maior, vezes);

    return ;
}

void lyze_array(int array[], int tam, int *maior, int *vezes){
    *maior = 0;
    for (int i = 0; i < tam; i++)
    {
        if (array[i] > *maior)
        {
            *maior = array[i];
            *vezes = 1;
        }else if (array[i] == *maior)
        {
            *vezes = *vezes + 1;
        }
    }

    return ;
}
