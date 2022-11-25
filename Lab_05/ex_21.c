#include <stdio.h>
#include <stdlib.h>

void imprime_ponto(int x_);

int main(){
    int x;
    printf("Digite o numero de linhas: ");
    scanf("%d", &x);
    imprime_ponto(x);

    return 0;
}

void imprime_ponto( int x_){
    int i, c;
    for ( c = 1; c <= x_; c++)
    {
        for ( i = 0; i < c; i++)
        {
            printf("!");
        }
        printf("\n");
    }
    
}