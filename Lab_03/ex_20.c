#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Digite tres valores referentes aos lados dos triangulos: ");
    scanf("%f %f %f", &x, &y, &z);
    if ((x + y) < z || (x + z) < y || (z + y) < x)
    {
        printf("Esse triangulo nao existe");
    } else {
        if (x == y || z == y || z == x)
        {
            printf("Esse triangulo eh isosceles");
        } else {
            if ( x == y && y == z)
            {
                printf("Esse triangulo eh equilatero");
            } else {printf("Esse triangulo eh escaleno");}
            
        }
        
    }
    
    return 0;
}
