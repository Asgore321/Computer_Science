
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n100, n10, n1;
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &n);
    n100 = n / 100;
    n10 = n/10 - n100*10;
    n1 = n%10;
    printf("O numero invertido eh: %d%d%d", n1, n10, n100);
    return 0;
}

