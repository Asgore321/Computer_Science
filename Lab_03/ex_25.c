#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Digite os valores dos coeficientes A, B e C da equação de segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b*b) - 4 * a * c;
    r1 = (sqrt(d)-b)/2*a;
    r2 = (-sqrt(d)-b)/2*a;
    if (d > 0)
    {
        printf("Raiz %.2f e Raiz %.2f", r1, r2);
    }
    if (d == 0)
    {
        printf("Raiz unica\n Raiz %.2f", r1);
    }
    if (d < 0)
    {
        printf("Nao existe raiz");
    }
    
    return 0;
}
