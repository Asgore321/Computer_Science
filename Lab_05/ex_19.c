#include <stdio.h>
#include <stdlib.h>

/*
 Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!
*/

int fatorial(int x_);

int main()
{
    int x;
    printf("Digite o valor de n: ");
    scanf("%d", &x);
    printf("O valor de %d fatorial eh %d", x, fatorial(x));

    return 0;
}

int fatorial(int x_){
    int i, retorno;
    retorno = x_;
    for ( i = 1; i <= x_; i++)
    {
        retorno = retorno * (x_ - i) 
    }
    
}
