#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z, w, m;
    printf("Digite as quatro notas que deseja obter a media aritmetica\n");
    scanf("%f %f %f %f", &z, &y, &x, &w);
    m = (x+y+z+w)/4;
    printf("A media eh %f", m);
    return 0;
}
