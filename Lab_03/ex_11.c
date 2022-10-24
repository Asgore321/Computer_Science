#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, n1, n2, n3, s;
    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &N);
    if (N > 0 && N < 1000)
    {
        n1 = N/100;
        n2 = (N%100)/10;
        n3 = (N%100)%10;
        s = n1 + n2 + n3;
        printf("A soma dos digitos e: %d", s);
    } else {printf("Numero invalido");}
    
    return 0;
}
