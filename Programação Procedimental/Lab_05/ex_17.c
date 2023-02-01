#include <stdio.h>
#include <stdlib.h>

int soma_intervalo(int x_, int y_);

int main(){
    int n1, n2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    printf("A soma dos numeros entre %d e %d eh: %d", n1, n2, soma_intervalo(n1, n2));
    return 0;
}

int soma_intervalo(int x_, int y_){
    int i, retorno;
    for ( i = x_ + 1; i < y_; i++)
    {
        retorno += i;
    }
    return retorno;
}