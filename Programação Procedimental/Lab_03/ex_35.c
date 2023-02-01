#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d, m, a;
    printf("Digite a data: ");
    scanf("%d/%d/%d", &d, &m, &a);
    if (m >= 1 && m <= 12){
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 0 && d <= 30)
        {
            printf("A data eh valida");
        } else {printf("A data eh invalida");} 
    } else{if (m != 2)
    {
        if ( d > 0 && d <= 31)
        {
            printf("A data eh valida");
        } else {printf("A data eh invalida");}   
    } else{
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {
        if (d > 0 && d <= 29)
        {
            printf("A data eh valida");
        } else {printf("A data eh invalida");}
        
    } else {
        if (d > 0 && d <= 28)
        {
            printf("A data eh valida");
        } else {printf("A data eh invalida");}
        
    }}}
    }else {printf("A data eh invalida");}

    
    
    

    return 0;
}
