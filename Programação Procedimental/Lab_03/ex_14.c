#include <stdio.h>
#include <stdlib.h>

int main()
{
    float as, ef, tl, mp;
    printf("Digite as notas do aluno na avaliação semestral, no exame final, e no trabalho de laboratorio: ");
    scanf("%f %f %f", &as, &ef, &tl);
    mp = ((tl*2) + (as*3) + (ef*5))/10;
    if (mp < 10 && mp >= 0)
    {
        if (mp >= 0 && mp < 3)
        {
            printf("Sua media eh %.2f e voce foi reprovado", mp);
        } else {if (mp >= 3 && mp < 5)
        {
            printf ("Sua media eh %.2f e voce esta de recuperacao", mp);
        } else {printf("Sua media eh %.2f e voce foi aprovado", mp);}
        }
        
    } else {printf("As notas estao invalidas");}
    
    return 0;
}
