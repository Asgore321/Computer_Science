#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite os numeros que deseja comparar: ");
    scanf("%f %f", &n1, &n2);
    if (n1 > n2)
    {
        printf("O numero %.1f eh o maior", n1);
    } else {printf("O numero %.1f eh o maior", n2);};
    
    return 0;
}
