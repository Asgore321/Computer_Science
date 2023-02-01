#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    printf("Digite um nnumero real: ");
    scanf ("%f", &n);
    if (n>=0)
    {
        n = sqrt(n);
        printf ("A raiz quadrade eh :%f", n);
    } else {n = n * n;
            printf("%f", n);}
    
    return 0;
}