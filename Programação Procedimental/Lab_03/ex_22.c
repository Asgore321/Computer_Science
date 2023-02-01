#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id, as;
    printf("Digite sua idade e o seu tempo prestado de servico: ");
    scanf("%d %d", &id, &as);
    if (id >= 65 || as >= 30)
    {
        printf("Voce ja pode se aposentar ");
    } else{
        if (id >= 60 && as >= 25)
        {
            printf("Voce ja pode se aposentar");
        } else {printf ("Voce nao pode se aposentar ainda");}
        
    };
    
    return 0;
}
