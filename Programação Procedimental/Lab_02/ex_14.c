#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592;
    float g, r;
    printf("Digite o angulo em graus que deseja converter para radianos\n");
    scanf("%f", &g);
    r = g*pi/180;
    printf("Em radianos temos %f", r);
    return 0;
}
