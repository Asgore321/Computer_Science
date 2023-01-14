#include <stdio.h>

void main(){
    int array[50];
    int *p;
    p = &array;
    for (int i = 0; i < 50; i++)
    {
        *(p+i)=0;
        *(p+i) = *(p+i)+1;
        printf("%d\n", * ( p + i));
    }
    

    return ;
}