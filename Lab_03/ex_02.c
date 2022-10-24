#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    printf("Digite um numero positivo para calcular a raiz quadrada: ");
    scanf ("%f", &n);
    if (n>=0)
    {
        n = sqrt(n);
        printf ("A raiz quadrade eh :%f", n);
    } else {printf("Esse numero eh invalido");};
    
    return 0;
}
