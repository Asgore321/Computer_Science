#include <stdio.h>
#include <stdlib.h>

float volume_cilindro(int x_, int y_);

int main(){
    int x, y;
    printf("Digite os valores de altura e do raio do cilindro, respectivamente: ");
    scanf("%d %d", &x, &y);
    printf("O volume do cilindro vale %.2f", volume_cilindro(x, y));
    return 0;
}

float volume_cilindro(int x_, int y_){
    float v, pi = 3.141592;
    v = x_*pi*(y_*y_);
    return v;

}