#include <stdio.h>

void ordena(int *v1, int *v2, int *v3){
    int m;
    if (*v2 > *v1)
    {
        m = *v2;
        *v2 = *v1;
        *v1 = m;
    }
    if (*v3 > *v1)
    {
        m = *v3;
        *v3 = *v1;
        *v1 = m;
    }
    if (*v3 > *v2)
    {
        m = *v3;
        *v3 = *v2;
        *v2 = m;
    }
    return ;
}

void main(){
    int v1, v2, v3;
    printf("Digite os valore de v1, v2 e v3: ");
    scanf(" %d %d %d", &v1, &v2, &v3);
    ordena(&v1,&v2,&v3);
    printf("Os valore ordenados:\nv1 - %d\nv2 - %d\nv3 - %d", v1, v2, v3);
    return ;
}