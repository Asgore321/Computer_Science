#include <stdio.h>
#include <stdlib.h>

float media(float x_,float  y_,float  z_);

float media_ponderada(float x_, float y_, float z_);

int main(){
    float x, y, z;
    char le;
    printf("Digite as tres notas e em seguida a letra: ");
    scanf("%f %f %f %c", &x, &y, &z, &le);
    if ( le == 'a' || le == 'A')
    {
        printf("A media eh %f", media(x,y,z));
    }
    if (le == 'b' || le == 'B')
    {
        printf("A media ponderada eh %f", media_ponderada(x,y,z));
    }
    
    
    return 0;
}

float media(float x_,float  y_,float  z_){
    float r;
    r = (x_ + y_ + z_)/3;
    return r;
}

float media_ponderada(float x_, float y_, float z_){
    float r;
    r = ((x_*5)+(y_*3)+(z_*2))/10;
    return r;
}