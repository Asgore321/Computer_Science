#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);
    if (x > y && x > z)
    {
        if (y > z)
        {
            printf("A ordem eh: %.2f %.2f %.2f", x, y, z);
        } else {printf("A ordem eh: %.2f %.2f %.2f", x, z, y);}
        
    } else {if (y > x && y > z)
    {
        if (x > z)
        {
            printf("A ordem eh: %.2f %.2f %.2f", y, x, z);
        } else {printf("A ordem eh: %.2f %.2f %.2f", y, z, x);}
        
    } else {if (z > x && z > y)
    {
        if (x > y)
        {
            printf("A ordem eh: %.2f %.2f %.2f", z, x, y);
        } else {printf("A ordem eh: %.2f %.2f %.2f", z, y, x);}
        
    }}}
    return 0;
}
