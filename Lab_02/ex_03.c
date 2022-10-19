#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z , s;
    printf("Digite 3 valores inteiros que deseja somar\n");
    scanf("%d%d%d", &x , &y , &z);
    s = x + y + z;
    printf("A soma eh %d\n", s);
    return 0;
}
