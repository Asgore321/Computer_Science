#include <stdio.h>
#include <stdlib.h>

main()
{
    float m, l;
    printf("Digite o volume em metros cubicos que deseja converter para litros\n");
    scanf("%f", &m);
    l = 1000*m;
    printf("Em litros temos %f", l);
    return 0;
}