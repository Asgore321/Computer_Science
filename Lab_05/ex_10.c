#include <stdio.h>
#include <stdlib.h>

int checa_maior(float y_, float x_);

int main(){
    float x, y;
    printf("Digite dois valores: ");
    scanf("%f %f", &x, &y);
    if (x != y)
    {
    if (checa_maior(x,y))
    {
        printf("O valor %.2f, eh o maior", y);
    }else {printf("O valor %.2f eh o maior", x);}
    }else{printf("Os numeros sao iguais");}
    
    return 0;
}

int checa_maior(float y_, float x_){
    if (x_ > y_)
    {
        return 1;
    }else {return 0;}
    
}