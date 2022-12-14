#include <stdio.h>
#include <stdlib.h>


void main(){
    char frase[50];
    char resultado[50];
    int tamanho;
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    for (int i = 0; i < 50; i++)
    {
        if (frase[i] == '\n')
        {
            tamanho = i;
            i = 50 ;
        }else{
            if (frase[i] == ' ')
            {
                resultado[i] = ' ';
            }else{
                resultado[i] = frase[i] + 3;
            }
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (resultado[i] == '\n')
        {
            i = 50 ;
        }else{
        printf("%c", resultado[i]);
        }
    }

    return ;
}