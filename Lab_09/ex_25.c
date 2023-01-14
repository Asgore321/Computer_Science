#include <stdio.h>

void ler_notas(float *nota_1, float *nota_2);
void media_notas(float *media_s, float *media_p, float *nota_1, float *nota_2);

int main(){
    float nota_1 = 0, nota_2 = 0;
    float media_s = 0, media_p = 0;
    ler_notas(&nota_1,&nota_2);
    media_notas(&media_s,&media_p,&nota_1,&nota_2);
    printf("A media simples foi: %.3f\nA media ponderada foi: %.3f", media_s, media_p);

}

void ler_notas(float *nota_1, float *nota_2){
    printf("Digite a primeira nota: ");
    scanf(" %f", nota_1);
    printf("Digite a segunda nota: ");
    scanf(" %f", nota_2);
}
void media_notas(float *media_s, float *media_p, float *nota_1, float *nota_2){
    *media_s = (*nota_1 + *nota_2)/2;
    *media_p = (*nota_1 + 2**nota_2)/3;
}