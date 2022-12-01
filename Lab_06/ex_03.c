#include <stdio.h>

void main(){
    int strg[6];
    printf("Digite 6 valores: ");
    scanf("%d %d %d %d %d %d", &strg[5]);
    printf("A ordem inversa eh ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", strg[i]);
    }
    
    return;
}