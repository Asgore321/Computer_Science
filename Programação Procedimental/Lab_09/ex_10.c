#include <stdio.h>


void main(){
    int lista[5];
    int *p;
    for (int i = 0; i < 5; i++)
    {
        p = &lista[i];
        printf("Digite o valor do espac %d: ", i);
        scanf(" %d", p);
        printf("O valor do espaco %d eh %d\n", i, 2*(*p));
    }
    return ;
}