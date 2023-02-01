#include <stdio.h>
#include <stdlib.h>

float converte_celsius (float x_);

int main(){
    float c;
    printf("Qual a temperatura em Celsius: ");
    scanf("%f", &c);
    printf("A temperatura em Fahrenheit eh %.2f", converte_celsius(c));
    return 0;
}

float converte_celsius (float x_){
    float f;
    f = x_ * (9.0/5.0) + 32;
    return f;
}