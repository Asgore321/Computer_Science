#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume (float x_);

int main (){
    float r;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("O volume eh %.4f", volume(r));
    return 0;
}

float volume (float x_){
    float pi = 3.1415, v, h = 3.0/4.0;
    v = pi*pow(x_,3)*h;
    return v;
}