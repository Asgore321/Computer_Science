#include <stdio.h>


void frac(float num, int *intreiro, float *frac);


void main(){
    float num, fracao;
    int inteiro;
    printf("Digite um numero fracionado: ");
    scanf("%f", &num);
    frac(num,&inteiro,&fracao);
    printf("O numero: %.4f\nSeu inteiro: %d\nA parte fracionaria: %.4f", num, inteiro, fracao);

    return ;
}

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int) num;
    float no_frac = *inteiro;
    *frac = num - no_frac;

    return ;
}
