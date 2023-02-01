#include <stdio.h>

void main(){
    int a = 20, *b, **c, ***d;
    b = &a;
    c = &b;
    d = &c;
    printf("O VALOR: %d\nO DOBRO: %d\nO TRIPLO: %d\nO QUADRUPLO: %d", a, 2*(*b), 3*(**c), 4*(***d));

    return ;
}