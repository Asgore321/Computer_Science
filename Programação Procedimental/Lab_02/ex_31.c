#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a, s;
    printf("Digite um numero inteiro que deseja saber o sucessor e antecessor\n");
    scanf("%d", &x);
    s = x+1;
    a = x-1;
    printf("Seu sucessor eh %d e seu antecessor eh %d", s,a);
    return 0;
}
