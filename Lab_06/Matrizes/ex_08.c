#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes
*/

void main(){
    int matriz1[2][2], matriz2[2][2];
    char opcao;
    int constante = 0;
    srand(time(NULL));
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            matriz1[i][k] = rand() % 100;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            matriz2[i][k] = rand() % 100;
        }
    }
    printf("Digite: \n a)Para somar as duas matrizes \n  b)Para subtrair a primeira matriz da segunda \n c)Para adicionar uma constante as duas matrizes \n d)Para imprimir as matrizes \n");
    scanf(" %c", &opcao);
    switch (opcao)
    {
    case 'a':
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] vale: %d \n", i, k, matriz1[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz2[%d][%d] vale: %d \n", i, k, matriz2[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] + matriz2[%d][%d] vale: %d \n", i, k, i, k, matriz1[i][k] + matriz2[i][k]);
            }
        }
        break;
    case 'b':
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] vale: %d \n", i, k, matriz1[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz2[%d][%d] vale: %d \n", i, k, matriz2[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] - matriz2[%d][%d] vale: %d \n", i, k, i, k, matriz1[i][k] - matriz2[i][k]);
            }
        }
        break;
    case 'c':
        printf("Digite um numero para ser adicionado a matriz: ");
        scanf(" %d", &constante);
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] vale: %d \n", i, k, matriz1[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz2[%d][%d] vale: %d \n", i, k, matriz2[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] + %d vale: %d \n", i, k, constante, matriz1[i][k] + constante);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz2[%d][%d] + %d vale: %d \n", i, k, constante, matriz2[i][k] + constante);
            }
        }
        break;
    case 'd':
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz1[%d][%d] vale: %d \n", i, k, matriz1[i][k]);
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("A matriz2[%d][%d] vale: %d \n", i, k, matriz2[i][k]);
            }
        }
        break;
    default:
        printf("Opcao invalida");
        break;
    }


    return;
}