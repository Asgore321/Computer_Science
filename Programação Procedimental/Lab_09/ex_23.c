#include <stdio.h>
#include <stdlib.h>

int retorna_maior(int *array_1, int N, int k);

void main(){
    int *array_1, stop = 1, N = 0, k = 0;
    char r ;

    array_1 = (int *) malloc(sizeof(int));
    printf("Vamos popular o array\nDigite o valor da primeira posicao: ");
    scanf("%d", array_1);
    N++;
    for(int i = 1;stop;i++){
        printf("Deseja adicionar mais valores ao array_1(s/n):  ");
        scanf(" %c", &r);
        if ( r == 's')
        {
            N = i + 1;
            array_1 = (int *) realloc(array_1,N*sizeof(int));
            printf("Digite o novo valor: ");
            scanf(" %d", (array_1 + i));
        }else{
            stop = 0;
        }
    }
    printf("Digite o valor de 'k':  ");
    scanf(" %d", &k);
    printf("O maior valor da string eh : %d", retorna_maior(array_1, N, k));

    return ;
}

int retorna_maior(int *array_1, int N, int k){
    int maior = 0;
    int kzinho = 0;
    printf("O array tem os elementos: \n");
    for (int i = 0; i < N; i++)
    {
        kzinho++;
        if (maior < array_1[i])
        {
            maior = array_1[i];
        }
        printf("%d ", array_1[i]);
        if (kzinho == k)
        {
            printf("\n");
            kzinho = 0;
        }
    }
    
    return maior;
}