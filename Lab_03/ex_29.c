#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, r1, r2, r3, r4, r5, R;
    srand(time(NULL));
    printf("%d + %d = ?\n",  x = rand()%100, y = rand()%100);
    r1 = x + y;
    printf("%d + %d = ?\n",  x = rand()%100, y = rand()%100);
    r2 = x + y;
    printf("%d + %d = ?\n",  x = rand()%100, y = rand()%100);
    r3 = x + y;
    printf("%d + %d = ?\n",  x = rand()%100, y = rand()%100);
    r4 = x + y;
    printf("%d + %d = ?\n",  x = rand()%100, y = rand()%100);
    r5 = x + y;
    R = 2;
    do
    {
    printf("Ja quer saber as respostas? \n 1-Sim \n 2-NAo");
    scanf("%d", &R);
    } while (R == 2);
    printf("As repostas das perguntas sao: \n 1-%d \n 2-%d \n 3-%d \n 4-%d \n 5-%d", r1, r2, r3, r4, r5);
    return 0;
}
