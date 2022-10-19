#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, st, ad, s;
    printf("Digite o numero desejado para as operacoes\n");
    scanf("%d", &x);
    st = (x*3)+1;
    ad = (x*2)-1;
    s = ad + st;
    printf("Seu resultado eh %d", s);
    return 0;
}
