#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, g, m;
    printf("Digite a distancia percorrida em Km e a gasolina gasta em Litros: ");
    scanf("%f %f", &d, &g);
    m = d / g;
    if (m < 8)
    {
        printf("Vende o carro");
    }
    if ( m >= 8 && m < 14)
    {
        printf("Economico!!");
    }
    if (m >= 14)
    {
        printf("Super Economico!!");
    }
    
    
    return 0;
}
