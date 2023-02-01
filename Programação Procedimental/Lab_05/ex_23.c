#include <stdio.h>
#include <stdlib.h>

void imprime_aste(int x_);

int main(){
    int x;
    printf("Digite a altura da piramide: ");
    scanf("%d", &x);
    imprime_aste(x);

    return 0;
}

void imprime_aste(int x_){
    int i, c;
    for ( c = 1; c <= x_; c++)
    {
        for ( i = 0; i < c; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for ( c = x_; c >0; c--)
    {
        for ( i = c; i > 1; i--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
}