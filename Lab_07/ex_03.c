#include <stdio.h>
#include <stdlib.h>

void main(){
    char frase[100];
    int final = 0;
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (frase[i] == '\n')
        {
            final = i;
            i = 99;   
        }
    }
    for (int i = final - 1; i > -1; i--)
    {
        printf("%c", frase[i]);
    }
    
    

    return ;
}