#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1, p2, p3, mp;
    printf("Digite as notas das provas: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    mp = (p1 + p2 + (p3*2))/4;
    if (mp > 60)
    {
        printf("Sua media eh %.1f voce foi aprovado", mp);
    } else {printf("Sua media eh %.1f voce reprovou", mp);}
    
    return 0;
}
