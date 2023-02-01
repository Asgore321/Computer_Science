#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime(float l[][3], int tam_l, int tam_c){
    float *p;
    for (int i = 0; i < tam_l; i++)
    {
        for (int j = 0; j < tam_c; j++)
        {
            p = &l[i][j];
            printf("%.2f\n", *p);
        } 
    }
    return ;
}

void main(){
    srand(time(NULL));
    float lista[3][3];
    float *p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p = &lista[i][j];
            *p = rand() % 1000;
        }
    }
    imprime(lista, 3, 3);
    return ;
}
