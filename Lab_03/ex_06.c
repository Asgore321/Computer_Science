#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, d;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        d = x - y;
        printf("O maior numero eh %d e a diferenca entre eles eh %d", x, d);
    } else{
        d = y - x;
        printf("O numero %d eh o maior e a diferenca entre eles eh %d", y, d);
    }
    
    return 0;
}
