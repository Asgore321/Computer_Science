#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v;
    printf("Escreva a letra que deseja passar para maiuscula: ");
    scanf("%c", &v);
    v += 32;
    printf("\n A letra em maiuscula eh: %c", v);
    return 0;
}
