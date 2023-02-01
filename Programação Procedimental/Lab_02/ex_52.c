#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ap1, ap2, ap3, apT, g1, g2, g3, P, p1, p2, p3;
    printf("Digite o valor apostado por cada um, e o valor total do premio: ");
    scanf("%f%f%f%f", &ap1, &ap2, &ap3, &P);
    apT = ap1+ap2+ap3;
    p1 = (ap1/apT);
    p2 = (ap2/apT);
    p3 = (ap3/apT);
    g1 = P*p1;
    g2 = P*p2;
    g3 = P*p3;
    printf("O primero ganharia %f, o segundo %f e o terceiro %f", g1, g2, g3);
    return 0;
}
