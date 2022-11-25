#include <stdio.h>
#include <stdlib.h>

/*
 Escreva uma função para determinar a quantidade de números primos abaixo de N
*/

int primos_abaixo(int x_);

int main()
{
    int n;
    printf("Digite o n: ");
    scanf("%d", &n);
    printf("A quantidade de numeros primos abaixo de %d eh %d", n, primos_abaixo(n));

    return 0;
}

int primos_abaixo(int x_){
    int i, retorno;
    retorno = 0;
    for ( i = x_; i > 0; i -= 1)
    {   
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            retorno++;
        }else
        {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            retorno;
        }else{retorno++;}
        }
    }
    return retorno;
    }
    
