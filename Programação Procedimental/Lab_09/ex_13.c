#include <stdio.h>
#include <string.h>

int stringU(char s1[], char s2[]){
    int contador = 0;
    int j = 0;
    char *p1, *p2;
    p1 = &s1;
    p2 = &s2;
    for (int i = 0; i < strlen(s1); i++)
    {
        for (int l = 0, j = i; l < strlen(s2) && *(p1 + j) == *(p2 + l);l++,j++)
        {
            if (l + 1 == strlen(s2))
            {
                return 1;
            }   
        }
    }
    return 0;
}

void main(){
    char frase_1[51];
    char frase_2[51];
    printf("Digite a primeira frase: ");
    fgets(frase_1, 50, stdin);
    printf("Digite a segunda frase: ");
    fgets(frase_2, 50, stdin);
    if(stringU(frase_1,frase_2)){
        printf("A frase 2 ocorre na 1\n");
    }else{printf("A frase 2 nao ocorre na 1\n");}
    return ;
}
