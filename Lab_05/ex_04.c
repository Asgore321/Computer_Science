#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checa(int x_){
    int quadrado_inteiro;
    float quadrado_float;
    quadrado_inteiro = (int) sqrt(x_);
    quadrado_float = sqrt(x_);
    if (quadrado_inteiro == quadrado_float)
    {
        return 1;
    }else{return 0;}
}

int main(){
    float x;
    printf("Digite o numero: ");
    scanf("%f", &x);
    if (checa(x))
    {
        printf("Eh um quadrado perfeito");
    }else{printf("Nao eh quadrado perfeito");}
    return 0;
    
}