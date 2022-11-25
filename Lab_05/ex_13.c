#include <stdio.h>
#include <stdlib.h>

int operacao(int x_, int y_, char op_);

int main()
{
    float n1, n2;
    char op;
    printf("Digite dois numeros e uma operacao: ");
    scanf("%f %f %c", &n1, &n2, &op);
    printf("Resultado: %d", operacao(n1, n2, op));
    return 0;
}

int operacao(int x_, int y_, char op_){
    int retorno;
    switch(op_){
        case '+':
            retorno = x_ + y_;
            break;
        case '-':
            retorno = x_ - y_;
            break;
        case '*':
            retorno = x_ * y_;
            break;
        case '/':
            retorno = x_ / y_;
            break;
        default:
            printf("Operacao invalida!");
            break;
    }
    return retorno;
}
