#include <stdio.h>
#include <time.h>

int soma_array(int *array_s1,int N, int *array_s2, int M, int *array_r);

void main(){
    int Ay1[50], Ay2[50], AyR[50], Ay4[30];
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        Ay1[i] = (rand() % 90) + 10;
        Ay2[i] = (rand() % 90) + 10;
        printf("Ay1[%d]: %d       Ay2[%d]: %d\n", i, Ay1[i], i, Ay2[i]);
    }
    if (soma_array(&Ay1, 50, &Ay2, 50, &AyR))
    {
        printf("SOMA FEITA COM SUCESSO\n");
        for (int i = 0; i < sizeof(AyR)/sizeof(AyR[0]); i++)
        {
            printf("O AyR[%d] eh : %d\n", i, AyR[i]);
        }
    }else{printf("ERROR");}
    

    return ;
}

int soma_array(int *array_s1, int N, int *array_s2, int M, int *array_r){
    if (N != M)
    {
        return 0;
    }
    for (int i = 0; i < M; i++)
    {
        *(array_r + i) = *(array_s1 + i) + *(array_s2 + i);
    }
    return 1;
}