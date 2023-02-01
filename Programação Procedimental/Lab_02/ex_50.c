#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v;
    int an, at, i;
    at = 2022;
    printf ("Digite quantos anos tera em 2022: ");
    scanf("%d", &i);
    an = at - i;
    printf("Voce nasceu em %d", an);
        
    return 0;
}
