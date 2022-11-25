#include <stdio.h>
#include <stdlib.h>

int exponenciacao (int x_, int z_);

int main(){
    int x, z;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &z);
    printf("O valor de base %d sob o expoente %d eh %d", x, z, exponenciacao(x, z));
    return 0;
}

int exponenciacao(int x_, int z_){
    int i, retorno;
    retorno = x_;
    for ( i = 2; i <= z_; i++)
    {
        retorno = retorno * x_;
    }
    return retorno;
    
}