#include <stdio.h>
#include <stdlib.h>

void main(){
    char frase[100];
    char troca = 'G';
    char vogais[11] = "AEIOUaeiou";
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (frase[i] != '\n')
        {
            for (int k = 0; k < 10; k++)
            {
            if (frase[i] == vogais[k])
            {
                frase[i] = troca;
            }
            }
            printf("%c", frase[i]);
        }else
        {
            i = 99;
        }
        
        
    }
    return ;
}