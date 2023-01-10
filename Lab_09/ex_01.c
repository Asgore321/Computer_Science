#include <stdio.h>



void main(){
    int d = 10, *pd = &d;
    float f = 25.5, *pf = &f;
    char c = 'c', *pc = &c; 
    printf("%d\n", *pd);
    printf("%f\n", *pf);
    printf("%c\n", *pc);
    *pd = 5;
    *pf = 12.8;
    *pc = 'C';
    printf("%d\n", *pd);
    printf("%f\n", *pf);
    printf("%c\n", *pc);

    return ;
}