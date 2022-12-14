#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char str1[50];
    char str2[50];
    int n;
    printf("Digite uma frase: ");
    fgets(str1, 50, stdin);
    printf("Digite outra frase: ");
    fgets(str2, 50, stdin);
    printf("Digite um numero: ");
    scanf("%d", &n);
    strncat(str1, str2, n);
    printf("%s", str1);


    return ;
}