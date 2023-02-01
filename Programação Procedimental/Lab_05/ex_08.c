#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa( int _x, int y_);

int main(){
    int x, y;
    printf("Digite os valores do catetos do triangulo: ");
    scanf("%d %d", &x, &y);
    printf("A hipotenusa vale %.2f", hipotenusa(x,y));
    return 0;
}

float hipotenusa( int x_, int y_){
    float r;
    r = sqrt(pow(x_,2)+pow(y_,2));
    return r;
}