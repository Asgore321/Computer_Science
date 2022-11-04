#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char e;
    int n1, n2, n3;
    float m;
    printf("Digite os tres numeros que deseja saber a media: ");
    scanf("%d %d %d", &n1,  &n2, &n3);
    printf("Qual media deseja saber: \n a-Geometrica \n b-Ponderada \n c-Harmonica \n d-Aritmetica \n");
    scanf(" %c", &e);
    switch (e)
    {
    case 'a':
        m = cbrt(n1*n2*n3);
        printf("A media eh %.3f", m);
        break;
    case 'b':
        m = ((1*n1)+(2*n2)+(3*n3))/3;
        printf("A media eh %.3f", m);
        break;
    case 'c':
        m = 1 / ((1/n1) + (1/n2) + (1/n3));
        printf("A media eh %.3f", m);
        break;
    case 'd':
        m = (n1 + n2 + n3)/3;
        printf("A media eh %.3f", m);
        break;
    }
    return 0;
}
