#include <stdio.h>
#include <stdlib.h>

struct vetor
{
    float a;
    float b;
    float c;
};

void zera_bufer(){
    setbuf(stdin,NULL);
    return ;
}

typedef struct vetor StrVet;

StrVet soma(StrVet a, StrVet b){
    StrVet resultado;
    resultado.a = a.a + b.a;
    resultado.b = a.b + b.b;
    resultado.c = a.c + b.c;

    return resultado;
}

void main(){
    StrVet vetor1, vetor2, vetor3;
    printf("Digite os valores de x do vetor 1 e 2: ");
    scanf("%f%f", &vetor1.a, &vetor2.a);
    zera_bufer();
    printf("Digite os valores de y do vetor 1 e 2: ");
    scanf("%f%f", &vetor1.b, &vetor2.b);
    zera_bufer();
    printf("Digite os valores de z do vetor 1 e 2: ");
    scanf("%f%f", &vetor1.c, &vetor2.c);
    zera_bufer();
    vetor3 = soma(vetor1, vetor2);
    printf("O valor do vetor soma A eh %.2f\n", vetor3.a);
    printf("O valor do vetor soma B eh %.2f\n", vetor3.b);
    printf("O valor do vetor soma C eh %.2f\n", vetor3.c);
    

    return ;
}
