#include <stdio.h> 

void cerscente(int *a, int *b){
    int troca;
    if(*b > *a){
        troca = *a;
        *a = *b;
        *b = troca; 
    }
    return ;
}


void main(){
    int a1, a2;
    printf("Digite o valor de a1: ");
    scanf(" %d", &a1);
    printf("Digite o valor de a2: ");
    scanf(" %d", &a2);
    cerscente(&a1,&a2);
    printf("O valor de a1 eh: %d\n", a1);
    printf("O valor de a2 eh: %d", a2);

    return ;
}