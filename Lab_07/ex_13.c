#include <stdio.h>
#include <stdlib.h>

void main(){
    char frase[50];
    int tamanho;
    int contador = 0;
    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);
    for (int i = 0; i < 50; i++)
    {
        if (frase[i] == '\n')
        {
            tamanho = i;
            i = 50 ;
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == frase[tamanho - i - 1])
        {
            contador++;
        }
    }
    if (contador == tamanho)
    {
        printf("A frase e um palindromo");
    }else{
        printf("A frase nao e um palindromo");
    }


    return ;
}