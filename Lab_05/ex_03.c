#include <stdio.h>
#include <stdlib.h>

int retorno(int x_);

int main(){
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    printf("O valor eh %d", retorno(valor));
    return 0;
}

int retorno(int x_){
    if (x_ > 0)
    {
        return 1;
    }
    if (x_ == 0)
    {
        return 0;
    }
    if (x_ < 0)
    {
        return -1;
    }
}