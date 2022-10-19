#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, m;
    printf("Digite a distancia em kilometros que deseja converter para milhas \n");
    scanf("%f", &k);
    m = k/1.61;
    printf("Em milhas eh %f", m);
    return 0;
}
