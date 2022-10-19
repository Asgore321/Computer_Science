#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592;
    float r, g;
    printf("Digite o angulo em radianos que deseja converter para graus\n");
    scanf("%f", &r);
    g = r*180/pi;
    printf("O angulo em graus eh %f", g);
    return 0;
}
