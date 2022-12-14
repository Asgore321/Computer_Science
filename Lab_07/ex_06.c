#include <stdio.h>
#include <stdlib.h>


void main(){
    char frase_m[35];
    char frase_M[35];
    frase_m[34] = '\n';
    srand(time(NULL));
    for (int i = 0; i < 34; i++)
    {
        frase_m[i] = 97 + rand() % 25;
    }
    for (int i = 0; i < 35; i++)
    {
        printf("%c", frase_m[i]);
    }
    for (int i = 0; i < 34; i++)
    {
        if (frase_m[i] != ' ')
        {
            frase_M[i] = frase_m[i] - 32;
            printf("%c", frase_M[i]);
        }else{
            frase_M[i] = frase_m[i];
            printf("%c", frase_M[i]);
        }
    }


    return ;
}