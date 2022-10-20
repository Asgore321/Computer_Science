#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, l, p;
    printf("Digite o comprimento e a lagura do terreno e o preco do metro da tela: ");
    scanf("%f%f%f", &l, &h, &p);
    printf("o preco total a ser pago sera de %.1f\n:", (l * h * p));
    return 0;
}
