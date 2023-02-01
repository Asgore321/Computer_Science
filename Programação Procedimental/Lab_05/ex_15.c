#include <stdio.h>
#include <stdlib.h>

int checa_triangulo(int a_, int b_, int c_);
int tipo_triangulo(int a_, int b_, int c_);

int main(){
    int a, b, c;
    printf("Digite os lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if (checa_triangulo(a, b, c) == 1){
        printf("Os lados formam um triangulo:\n");
        switch (tipo_triangulo(a, b, c)){
            case 1:
                printf("Equilatero");
                break;
            case 2:
                printf("Isosceles");
                break;
            case 3:
                printf("Escaleno");
                break;
        }
    } else {
        printf("Os lados nao formam um triangulo!");
    }
    return 0;
}

int checa_triangulo(int a_, int b_, int c_){
    int retorno;
    if (a_ < b_ + c_ && b_ < a_ + c_ && c_ < a_ + b_){
        retorno = 1;
    } else {
        retorno = 0;
    }
    return retorno;
}

int tipo_triangulo(int a_, int b_, int c_){
    int retorno;
    if (a_ == b_ && b_ == c_){
        retorno = 1;
    } else if (a_ == b_ || b_ == c_ || a_ == c_){
        retorno = 2;
    } else {
        retorno = 3;
    }
    return retorno;
}