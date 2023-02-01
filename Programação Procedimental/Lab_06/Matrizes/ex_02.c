#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (i == k)
            {
                matriz[i][k] = 1;
            }
            else
            {
                matriz[i][k] = 0;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("A matriz[%d][%d] vale: %d \n", i, k, matriz[i][k]);
        }
    }

    
    return;
}