#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1000, n100, n10, n1;
    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &n);
    n1000 = n / 1000;
    n100 = n / 100 - n1000*10;
    n10 = n / 10 - n100*10 - n1000*100;
    n1 = n%10;
    printf("\n%d\n%d\n%d\n%d", n1000, n100, n10, n1);
    return 0;
}
