#include <stdio.h>
#include <stdlib.h>

struct alunos
{
    char nome[50];
    char matricula[20];
    char curso[20];
};

typedef struct alunos StrAlu;

void main(){
    int k, l, i, m, n;
    StrAlu cadastro[5];
    int contagem = 1;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d aluno: ", contagem);
        fgets(cadastro[i].nome, 50, stdin);
        setbuf(stdin,NULL);
        printf("Digite a matricula do %d aluno: ", contagem);
        fgets(cadastro[i].matricula, 20, stdin);
        setbuf(stdin,NULL);
        printf("Digite o curso do %d aluno: ", contagem);
        fgets(cadastro[i].curso, 20, stdin);
        setbuf(stdin,NULL);
        contagem++;
    }
    contagem = 1;
    printf("-----------------------------------------------------------------------\n");
    for ( k = 0; k < 5; k++)
    {
    printf("O nome do %d aluno eh: ", contagem);
    for ( l = 0; cadastro[k].nome[l] != '\n'; l++)
    {
        printf("%c", cadastro[k].nome[l]);
    }
    printf("\n");
    printf("A matricula do %d eh: ", contagem);
    for ( m = 0; cadastro[k].matricula[m] != '\n'; m++)
    {
        printf("%c", cadastro[k].matricula[m]);
    }
    printf("\n");
    printf("O curso do %d eh: ",contagem);
    for ( n = 0; cadastro[k].curso[n] != '\n'; n++)
    {
        printf("%c", cadastro[k].curso[n]);
    }
    printf("\n");
    contagem++;
    }
    


    return ;
}