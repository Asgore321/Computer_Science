#include <stdio.h>
#include <stdlib.h>

void imprime_aste(int x_);

int main(){
    int x;
    printf("Digite a altura da piramide: ");
    scanf("%d", &x);
    imprime_aste(x);
    return 0;
}

void imprime_aste( int x_){
    int i, c, a, w, topo;
    w = 1;
    topo = (2*x_) - 1;
    for ( c = x_; c > 0 ; c--)
    {
        for ( i = c; i > 0 ; i--)
        {
            printf(" ");
        }
        for ( a = 0; a < w; a++ )
        {
            printf("*");
        }
        printf("\n");
        w += 2;
    }
    

}
