#include <stdio.h>


void main(){
    int y;
    int x;
    
    printf("%p\n", &x);
    printf("%p\n", &y);
    if (&x > &y)
    {
        printf("O endereco eh maior: %p", &x);
    }else{printf("O endereco eh maior: %p", &y);}
    

}