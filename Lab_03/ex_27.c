#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Digite sua idade: ");
    scanf("%d", &i);
    if (i >= 5 && i <=7)
    {
        printf("Sua categoria eh Infantil A");
    }
    if (i >= 8 && i <=10)
    {
        printf("Sua categoria eh Infantil B");
    }
    if (i >= 11 && i <=13)
    {
        printf("Sua categoria eh Juvenil A");
    }
    if (i >=14 && i <= 17)
    {
        printf("Sua categoria eh Juvenil B");
    }
    if (i >=18)
    {
        printf("Sua categoria eh Senior");
    }
    
    return 0;
}