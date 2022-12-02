#include <stdio.h>
#include <stdlib.h>

void main(){
    char frases[100];
    printf("Digite uma frase: ");
    fgets(frases, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (frases[i] != '\n')
        {
        if (frases[i] != 'r')
        {
            printf("%c", frases[i]);
        }else{
            if (frases[i + 1] != ' ')
            {
            frases[i] = 'l';
            printf("%c", frases[i]);
            }else
            {
                printf("%c", frases[i]);
            }
            
        }
        }else{i = 99;}
        
    }
    return ;
}