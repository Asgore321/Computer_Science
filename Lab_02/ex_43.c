#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vt, vd_10, vp;
    printf("Digite o valor total da compra: ");
    scanf("%f", &vt);
    vd_10 = vt*0.90;
    vp = vt/3;
    printf("\n O valor da compra com 10 por cento de desconto eh: R$%f \n O valor da parcela em 3x eh: R$%f \n O valor da comissao a vista eh: R$%f \n O valor da comissao parcelado eh: R$%f\n", vd_10, vp, vd_10*0.05, vt*0.05);
    return 0;
}
