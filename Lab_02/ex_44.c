#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hd, hs, ds;
    printf("Digite a altura dos degraus e a altura que deseja subir:");
    scanf("%f %f", &hd, &hs);
    ds =  (int) (hs/hd);
    printf("\n O numero de degraus que devera subir eh: %f \n", ds);
    return 0;
}
