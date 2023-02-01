#include <stdio.h>
#include <stdlib.h>

void imprime_linha(int x_);

int main(){
    int ncl, i;
    printf("Digite o numero de caracteres da linha: ");
    scanf("%d", &ncl);
    imprime_linha(ncl);
    
    return 0;
}

void imprime_linha(int x_){
    int i;
    for ( i = 0; i <= x_; i++)
    {
        printf("=");
    }
}
