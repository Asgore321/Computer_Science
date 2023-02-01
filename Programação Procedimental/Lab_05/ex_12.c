#include <stdio.h>
#include <stdlib.h>
int retorna_unidade(int x_);
int retorna_dezena(int x_);
int retorna_centena(int x_);

int main(){
    int inteiro,x, y, z;
    printf("Digite um valor: ");
    scanf("%d", &inteiro);
    x = retorna_unidade(inteiro);
    y = retorna_dezena(inteiro);
    z = retorna_centena(inteiro);
    printf("A soma dos valores eh: %d", x+y+z);
    
    return 0;
}

int retorna_unidade(int x_){
    int retorno;
    retorno = x_%10;

    return retorno;
}

int retorna_dezena(int x_){
    int retorno;
    retorno = (x_%100)/10;
    
    return retorno;
}

int retorna_centena(int x_){
    int retorno;
    retorno = x_ / 100;

    return retorno;
}