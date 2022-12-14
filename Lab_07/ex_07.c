#include <stdio.h>
#include <stdlib.h>


void main(){
    int contador = 0;
    char frase[50];
    char resultado[50];
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    for (int i = 0; i < 50; i++)
    {
        if (frase[i] != ' ')
        {
            resultado[i - contador] = frase[i];    
        }else{
            contador++;
        }
    }
    for (int i = 0; i < 50; i++)
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