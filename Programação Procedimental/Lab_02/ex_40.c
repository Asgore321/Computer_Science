#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    const int sl = 30;
    const float imp = 0.08;
    float v, vp;
    printf("Digite a quantidade de dias trabalhados\n");
    scanf("%d", &d);
    v = d*sl;
    vp = v*imp;
    printf("O valor a ser pago ao funcionario eh %f", v-vp);
    return 0;
}
