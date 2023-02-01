#include <stdio.h>


void main(){
    int law[100];
    int *p;
    p = &law;
    for (int i = 0; i < 100; i++)
    {
        *(p + i) = 1;
        printf("%d", *(p + i));
    }
    return ;
}