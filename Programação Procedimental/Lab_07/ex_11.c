#include <stdio.h>
#include <stdlib.h>


void main(){
    char frase[50];
    int i;
    int j;
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    printf("Digite o valor de I: ");
    scanf(" %d", &i);
    printf("Digite o valor de J: ");
    scanf(" %d", &j);
    for (int k = i; k <= j; k++)
    {
        printf("%c", frase[k]);
    }


    return ;
}