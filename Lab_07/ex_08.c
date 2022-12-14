#include <stdio.h>
#include <stdlib.h>


void main(){
    char frase[50];
    char l1;
    char l2;
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    printf("\nDigite a letra que deseja trocar: ");
    scanf(" %c", &l1);
    printf("\nDigite a letra que deseja trocar por: ");
    scanf(" %c", &l2);
    for (int i = 0; i < 50; i++)
    {
        if (frase[i] == l1)
        {
            frase[i] = l2;
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (frase[i] == '\n')
        {
            i = 50 ;
        }else{
        printf("%c", frase[i]);
        }
    }

    return ;
}