#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main(){
    int matriz[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (i < k)
            {
                matriz[i][k] = 2 * i + 7 * k - 2;
            }
            else if (i == k)
            {
                matriz[i][k] = 3 * pow(i, 2) - 1;
            }
            else
            {
                matriz[i][k] = 4 * pow(i, 3) - 5 * pow(k, 2) + 1;
            }
        }
    }
     for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            printf("A matriz[%d][%d] vale: %d \n", i, k, matriz[i][k]);
        }
        printf("----------------------------------------\n");
    }

    
    return;
}