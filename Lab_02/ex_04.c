#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    printf("Digite o numero que deseja elevar ao quadrado\n");
    scanf("%f",&r);
    r = r*r;
    printf("O resultado eh %f", r);
    return 0;
}
