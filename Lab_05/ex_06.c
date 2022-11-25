#include <stdio.h>
#include <stdlib.h>

int converte_s (int x_, int y_, int z_);

int main(){
    int x, y, z;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d segundos",converte_s(x, y, z));
    return 0;
}

int converte_s (int x_, int y_, int z_){
    x_ = x_*60*60;
    y_ = y_*60;
    return x_+y_+z_;
}
