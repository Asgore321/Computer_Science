#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

void main(){
    float R, area, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &R);
    calc_esfera(R,&area,&volume);
    printf("O raio: %.2f\nA area: %.4f\nO volume: %.4f", R, area, volume);

    return ;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * 3.14 * sqrt(R);
    *volume = (4/3) * 3.14 * pow(R, 3);
    return ;
}