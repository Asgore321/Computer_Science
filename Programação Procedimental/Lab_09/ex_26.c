#include <stdio.h>
#include <math.h>

int calcula_raizes(float *X1, float *X2, float a, float b, float c);

int main(){
    float X1 = 0, X2= 0, a = 0, b = 0, c = 0;
    int num_raizes;
    printf("Digite o Valor de 'a': ");
    scanf("%f", &a);
    printf("Digite o Valor de 'b': ");
    scanf(" %f", &b);
    printf("Digite o Valor de 'c': ");
    scanf(" %f", &c);
    num_raizes = calcula_raizes(&X1, &X2, a, b, c);
    printf("Existem %d raizes reais para essa equacao\n", num_raizes);
    if (num_raizes == 2)
    {
        printf("O valor de X1 eh: %.2f\n", X1);
        printf("O valor de X2 eh: %.2f\n", X2);
    }else if (num_raizes == 1)
    {
        printf("A raiz da equacao eh: %.2f\n", X1);
    }
    return 0;
}

int calcula_raizes(float *X1, float *X2, float a, float b, float c){
    float delta = 0;
    delta = (pow(b,2) - 4*a*c);
    printf("O delta vale: %.2f\n", delta);
    if (delta < 0)
    {
        return 0;
    }else if (delta == 0)
    {
        *X1 = (float) -b + sqrt(delta)/ 2 * a;
        return 1;
    }else
    {
    *X1 = ((-b + sqrt(delta))/2*a);
    *X2 = ((-b - sqrt(delta))/2*a);
    return 2;
    } 
}