#include <stdio.h>
#include <stdlib.h>

struct civil
{
    char nome[100];
    char endereco[300];
    int idade;
};

typedef struct civil CadPessoa;

void main(){
    CadPessoa civil;
    printf("\nDigite o nome completo: ");
    fgets(civil.nome, 100, stdin);
    printf("\nDigite sua idade: ");
    scanf(" %d", &civil.idade);
    setbuf(stdin,NULL);
    printf("\nDigite seu endereco: ");
    fgets(civil.endereco, 300, stdin);
    printf("\nSeu nome eh: ");
    for (int i = 0; civil.nome[i] != '\n'; i++)
    {
        printf("%c", civil.nome[i]);
    }
    printf("\nSeu endereco eh: ");
    for (int i = 0; civil.endereco[i] != '\n'; i++)
    {
        printf("%c", civil.endereco[i]);
    }
    printf("\nSua idade eh: %d", civil.idade);

    return ;
}
