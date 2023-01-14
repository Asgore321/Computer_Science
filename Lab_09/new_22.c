#include <stdio.h>
#include <stdlib.h>


int soma_array(int *arr_1, int m, int *arr_2, int n, int **arr_3);

void main(){
    int *ray_1, *ray_2, *ray_3, stop = 1, m = 0, n = 0, l = 0;
    char r;
    
    ray_1 = (int *) malloc(sizeof(int));
    printf("Vamos popular o primeiro array\nDigite o valor da primeira posicao: ");
    scanf("%d", ray_1);
    m++;
    for(int i = 1;stop;i++){
        printf("Deseja adicionar mais valores ao array_1(s/n):  ");
        scanf(" %c", &r);
        if ( r == 's')
        {
            m = i + 1;
            ray_1 = (int *) realloc(ray_1,m*sizeof(int));
            printf("Digite o novo valor: ");
            scanf(" %d", (ray_1 + i));
        }else{
            stop = 0;
        }
    }
    stop = 1;
    ray_2 = (int *) malloc(sizeof(int));
    printf("Vamos popular o segundo array\nDigite o valor da primeira posicao: ");
    scanf("%d", ray_2);
    n++;
    for(int i = 1;stop;i++){
        printf("Deseja adicionar mais valores ao array_1(s/n):  ");
        scanf(" %c", &r);
        if ( r == 's')
        {
            n = i + 1;
            ray_2 = (int *) realloc(ray_2,n*sizeof(int));
            printf("Digite o novo valor: ");
            scanf(" %d", (ray_2 + i));
        }else{
            stop = 0;
        }
    }
    if (soma_array(ray_1, m, ray_2, n, &ray_3))
    {
        printf("Soma realizada com sucesso!!\n");
        for (int l = 0; l < m; l++)
        {
            printf("O array_3[%d] vale: %d\n", l, *(ray_3 + l));
        }
    }else{printf("ERROR");}

    printf("Tamanho do array 1: %d\n",m);
    printf("Tamanho do array 2: %d\n",n);
    free(ray_1);
    free(ray_2);
    free(ray_3);
    return ;
}

int soma_array(int *arr_1, int m, int *arr_2, int n, int **arr_3){
if (m == n)
{
    *arr_3 = (int *) calloc(m, sizeof(int));
    for (int i = 0; i < m; i++)
    {
        **(arr_3 + i) = arr_1[i] + arr_2[i];
    }
    return 1;
}else{return 0;}
}