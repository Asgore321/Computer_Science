#include <stdio.h>
#include <stdlib.h>


void main(){
    char mercadoria[20];
    float valor;
    float desconto;
    float valor_a_pagar;
    printf("Digite o nome da mercadoria: ");
    fgets(mercadoria, 20, stdin);
    printf("Digite o valor da mercadoria: ");
    scanf(" %f", &valor);
    desconto = valor * 0.1;
    valor_a_pagar = valor - desconto;
    printf("O nome da mercadoria eh %s", mercadoria);
    printf("\nO valor da mercadoria eh %.2f", valor);
    printf("\nO valor do desconto eh %.2f", desconto);
    printf("\nO valor a pagar eh %.2f", valor_a_pagar);

    return ;
}