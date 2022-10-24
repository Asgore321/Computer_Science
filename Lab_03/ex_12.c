#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    double _log;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &N);
    if (N > 0)
    {
        _log = log10(N);
        printf(" O log de %d eh %f", N, _log); 
    } else {printf("Numero invalido");}
    
    return 0;
}
