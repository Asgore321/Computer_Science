#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, h, m, sf;
    printf("Digite o valor em segundo: ");
    scanf("%d", &s);
    sf = s%60;
    m = s / 60;
    if (m >= 60)
    {
        h = m / 60;
        m = m%60;
    }
    
    printf("Temos %d horas %d minutos e %d segundos", h, m, sf);
    return 0;
}
