#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if (x % 2 ==0)
    {
        printf("O numero %d eh par", x);
    } else {printf("O numero %d eh impar", x);}
    
    return 0;
}
