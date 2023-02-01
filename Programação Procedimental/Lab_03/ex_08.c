#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, m;
    printf("Digite duas notas: ");
    scanf("%f %f", &x, &y);
    if (x >= 0 && x <= 10)
    { if (y >= 0 && y <= 10)
    {
        m = (x + y)/2;
        printf("A medias eh %f", m);       
    } else {printf("As notas sao invalidas");}
    } else {printf("As notas sao invalidas");}
    
    return 0;
}
