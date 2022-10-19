#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P, g1, g2, g3;
    P = 780000;
    g1 = P*0.46;
    g2 = P*0.32;
    P -= g1;
    P -= g2;
    g3 = P;
    printf("O primeiro ganhador recebera R$%f,\n o segundo ganhador recebera R$%f\n e o terceiro ganhador recebera R$%f", g1, g2, g3);
    return 0;
}

