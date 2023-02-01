#include <stdio.h>

int troca(int *a, int *b){
    int da, db, soma;
    da = (*a) * 2; 
    db = (*b) * 2;
    *a = da;
    *b = db;
    soma = da + db;

    return soma;
}

void main(){
    int a1, a2, soma;
    printf("Digite o valor de a1: ");
    scanf(" %d", &a1);
    printf("Digite o valor de a2: ");
    scanf(" %d", &a2);
    soma = troca(&a1,&a2);
    printf("O valor de a1 eh: %d\n", a1);
    printf("O valor de a2 eh: %d", a2);
    printf("\nO valor da soma eh: %d", soma);

    return ;
}