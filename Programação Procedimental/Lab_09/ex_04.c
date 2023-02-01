#include <stdio.h>

void troca(int *a, int *b){
    int troca;
    troca = *a;
    *a = *b;
    *b = troca; 

    return ;
}


void main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf(" %d", &a);
    printf("Digite o valor de b: ");
    scanf(" %d", &b);
    troca(&a,&b);
    printf("O valor de a eh: %d\n", a);
    printf("O valor de b eh: %d", b);

    return ;
}