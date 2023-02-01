#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sa, em;
    printf("Digite o valor do seu salario e o valor do emprestimo: ");
    scanf("%f %f", &sa, &em);
    if (em > sa*0.2)
    {
        printf("Emprestimo nao concedido");
    } else {printf("Emprestimo concedido");}
    
    return 0;
}
