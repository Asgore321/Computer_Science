#include <stdio.h>

void printpar(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        if ((a[i] % 2) == 0)
        {
            printf("O espaco %d possui o numero par: %d\n", i, a[i]);
        }
    }
    


    return ;
}



void main(){
    int array[5];
    int *p;
    for (int i = 0; i < 5; i++)
    {
        p = &array[i];
        printf("Digite o valor da posicao %d:  ", i);
        scanf(" %d", p);
    }
    printpar(array, 5);

    return ;
}