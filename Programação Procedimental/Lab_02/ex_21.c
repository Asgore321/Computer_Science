#include <stdio.h>
#include <stdlib.h>
//Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
//conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras
int main()
{
    float k, l;
    printf("Digite o valor de massa em libras que deseja converter para quilogramas\n");
    scanf("%f", &l);
    k = l*0.45;
    printf("Em quilogramas temos %f", k);
    return 0;
}
