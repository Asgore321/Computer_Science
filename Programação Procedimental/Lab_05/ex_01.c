#include <stdio.h>
#include <stdlib.h>

 int dobro (int x_){
    return 2*x_;
 }

 int main(){
    int var, result;
    printf("------------------------- \n Digite o numero: ");
    scanf("%d", &var);
    result = dobro(var);
    printf(" O resultado eh: %d \n-------------------------", result);
    return 0;
 }