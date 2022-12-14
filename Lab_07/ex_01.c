#include <stdio.h>
#include <stdlib.h>

void main(){
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (frase[i] != '\n')
        {
            printf("%c", frase[i]);
        }else
        {
            i = 99;
        }
        
        
    }
    

    return ;
}