#include <stdio.h>
#include <stdlib.h>

int consumo(int km_, int litros_);

int main()
{
    int km, litros;
    printf("Digite a distancia percorrida em Km: ");
    scanf("%d", &km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%d", &litros);
    if (consumo(km, litros) < 8){
        printf("Venda o carro!");
    } else if (consumo(km, litros) >= 8 && consumo(km, litros) <= 14){
        printf("Economico!");
    } else {
        printf("Super economico!");
    }

    ;
    return 0;
}

int consumo(int km_, int litros_){
    int retorno;
    retorno = km_ / litros_;
    return retorno;
}