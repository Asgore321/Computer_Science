#include <stdio.h>

void main(){
    int y;
    int x;
    
    printf("Digite o valor de x: ");
    scanf(" %d", &x);
    printf("\nDigite o valor de y: ");
    scanf(" %d", &y);
    if (&x > &y)
    {
        printf("\nO maior endereco eh de x: %p", &x);
    }else{printf("\nO maior endereco eh de y: %p", &y);}
    

}