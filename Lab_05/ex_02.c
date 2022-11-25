#include <stdio.h>
#include <stdlib.h>

int convert(int x_,int y_,int z_);

int main(){
    int dia, mes, ano;
    printf("Digite a data que deseja converter: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    convert(mes, dia, ano);
    return 0;
}

int convert(int x_,int y_,int z_){
    switch (x_)
    {
    case 1:
        printf("A data eh %d de Janeiro de %d", y_, z_);
        break;
    case 2:
        printf("A data eh %d de Fevereiro de %d", y_, z_);
        break;
    case 3:
        printf("A data eh %d de Março de %d", y_, z_);
        break;
    case 4:
        printf("A data eh %d de Abril de %d", y_, z_);
        break;
    case 5:
        printf("A data eh %d de Maio de %d", y_, z_);
        break;
    case 6:
        printf("A data eh %d de Junho de %d", y_, z_);
        break;
    case 7:
        printf("A data eh %d de Julho de %d", y_, z_);
        break;
    case 8:
        printf("A data eh %d de Agosto de %d", y_, z_);
        break;
    case 9:
        printf("A data eh %d de Setembro de %d", y_, z_);
        break;
    case 10:
        printf("A data eh %d de Outrubro de %d", y_, z_);
        break;
    case 11:
        printf("A data eh %d de Novembro de %d", y_, z_);
    case 12:
        printf("A data eh %d de Dezembro de %d", y_, z_);
        break;
    default:
        printf("DATA INCORRETA");
        break;
    }
}