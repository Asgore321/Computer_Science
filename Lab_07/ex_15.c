#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s1[21];
    char s2[21];
    
    char c1, c2;
    char opcao;
    int tamanho;
    int posicao;
    int contador = 0;

    printf("(a) Ler uma string S1 (tamanho maximo 20 caracteres);\n(b) Imprimir o tamanho da string S1;\n(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;\n(e) Imprimir a string S1 de forma reversa;\n(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere deve ser informado pelo usuario;\n(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario;\n(h) Verificar se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuario;\n(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring.\n");
    printf("Digite uma opcao: ");
    scanf("%c", &opcao);
    getchar();

    switch (opcao)
    {
    case 'a':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        break;
    case 'b':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        tamanho = strlen(s1);
        printf("O tamanho da string S1 e: %d", tamanho);
        break;
    case 'c':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite uma string S2: ");
        fgets(s2, 21, stdin);
        if (strcmp(s1, s2) == 0)
        {
            printf("As strings sao iguais");
        }else{
            printf("As strings sao diferentes");
        }
        break;
    case 'd':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite uma string S2: ");
        fgets(s2, 21, stdin);
        strcat(s1, s2);
        printf("A string concatenada e: %s", s1);
        break;
    case 'e':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        tamanho = strlen(s1);
        for (int i = tamanho; i >= 0; i--)
        {
            printf("%c", s1[i]);
        }
        break;
    case 'f':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite um caractere: ");
        scanf(" %c", &c1);
        tamanho = strlen(s1);
        for (int i = 0; i < tamanho; i++)
        {
            if (s1[i] == c1)
            {
                contador++;
            }
        }
        printf("O caractere %c aparece %d vezes na string S1", c1, contador);
        break;
    case 'g':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite um caractere: ");
        scanf(" %c", &c1);
        printf("Digite um caractere: ");
        scanf(" %c", &c2);
        tamanho = strlen(s1);
        for (int i = 0; i < tamanho; i++)
        {
            if (s1[i] == c1)
            {
                s1[i] = c2;
                break;
            }
        }
        printf("A string S1 e: %s", s1);
        break;
    case 'h':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite uma string S2: ");
        fgets(s2, 21, stdin);
        if (strstr(s1, s2) != NULL)
        {
            printf("A string S2 e substring da string S1");
        }else{
            printf("A string S2 nao e substring da string S1");
        }
        break;
    case 'i':
        printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
        fgets(s1, 21, stdin);
        printf("Digite a posicao: ");
        scanf("%d", &posicao);
        printf("Digite o tamanho: ");
        scanf("%d", &tamanho);
        for (int i = posicao; i <= (posicao+tamanho); i++)
        {
            printf("%c", s1[i]);
        }
        break;
    default:
        printf("Opcao invalida");
        break;
    }


    return 0;
}