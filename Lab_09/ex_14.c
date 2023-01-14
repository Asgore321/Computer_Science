#include <stdio.h>


void main(){
    char law[100];
    char *p;
    p = &law;
    for (int i = 0; i < 100; i++)
    {
        *(p + i) = 'l';
        *(p + 1 + i) = 'a';
        *(p + 1 + 1 + i) = 'w';
        printf("%c", *(p + i));
        i++;
        printf("%c", *(p + i));
        i++;
        printf("%c", *(p + i));
    }
    

    return ;
}