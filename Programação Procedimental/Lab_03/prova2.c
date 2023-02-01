#include <stdio.h>

int main (){


    char x = 'A';
    int    i = 0, y;

    printf("Digite quants ramos \n");
    scanf("%d", &y);

    while (i <= y){
        printf("%c\n", x * i);
        x = x + 1;
        i = i + 1;

}
return 0;
}
