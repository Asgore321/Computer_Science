#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura, peso;
    printf("Digite o sexo (M ou F) e a altura: ");
    scanf("%c %f", &sexo, &altura);
    switch (sexo)
    {
    case 'M':
        peso = (72.7*altura)-58;
        printf("O peso ideal e: %f", peso);
        break;
    case 'F':
        peso = (62.1*altura)-44.7;
        printf("O peso ideal e: %f", peso);
        break;
    default: printf("Sexo invalido");
        break;
    }
    return 0;
}
