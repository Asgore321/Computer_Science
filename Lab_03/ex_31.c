#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, p;
    printf("Digite sua altura em metros e seu peso em quilogramas: ");
    scanf("%f %f", &h, &p);
    if (h < 1.20)
    {
        if (p < 60)
        {
            printf("Sua categoria na tabela eh A");
        }
        if (p >= 60 && p < 90)
        {
            printf("Sua categoria na tabela eh D");
        }
        if (p >= 90)
        {
            printf("Sua categoria na tabela eh G");
        }  
    }
    if (h >= 1.20 && p < 1.70)
    {
        if (p < 60)
        {
            printf("Sua categoria na tabela eh B");
        }
        if (p >= 60 && p <90)
        {
            printf("Sua categoria na tabela eh E");
        }
        if (p >= 90)
        {
            printf("Sua categoria na tabela eh H");
        }  
    }
    if (h >= 1.70)
    {
        if (p < 60)
        {
            printf("Sua categoria na tabela eh C");
        }
        if (p >= 60 && p <90)
        {
            printf("Sua categoria na tabela eh F");
        }
        if (p > 90)
        {
            printf("Sua categoria na tabela eh I");
        }  
    }
    
    return 0;
}
