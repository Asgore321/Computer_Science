#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, nv;
    printf("Digite o salario do funcionario\n");
    scanf("%f", &s);
    nv = s*1.25;
    printf("O novo salario do funcionario eh %f", nv);
    return 0;
}