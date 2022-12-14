#include <stdio.h>
#include <stdlib.h>


void main(){
    char carros[5][20];
    float consumo[5];
    float consumo_1000[5];
    float menor_consumo = 0;
    int posicao_menor_consumo;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o modelo do carro %d: ", i);
        fgets(carros[i], 20, stdin);
        printf("Digite o consumo do carro %d em km/l: ", i);
        scanf(" %f", &consumo[i]);
        consumo_1000[i] = 1000 / consumo[i];
        getchar();
    }
    for (int i = 0; i < 5; i++)
    {
        if (consumo[i] > menor_consumo)
        {
            menor_consumo = consumo[i];
            posicao_menor_consumo = i;
        }
    }
    printf("O carro mais economico eh o %s \n Que faz em 1000 km %.1f litros", carros[posicao_menor_consumo], consumo_1000[posicao_menor_consumo]);
    

    return ;
}