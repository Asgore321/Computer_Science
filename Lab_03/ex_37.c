
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, H, M, hd, md, mm, MM, dtm;
    float vp;
    printf("Digite as horas e minutos de chegada e horas e minutos de partida: ");
    scanf("%d %d %d %d", &h, &m, &H, &M);
    if (h > H)
    {
        hd = (24 - h) + H;
    } else {hd = H - h;}
    if (m != 0 && m <60)
    {
        mm = 60 - m;
    } else {mm = 0;}
    if (M != 0 && M <60)
    {
        MM = M;
    } else {MM = 0;}
    if (M == m)
    {
        md = 0;
    }else {md = MM + mm;}
    if (md > 60)
    {
        md = md % 60;
        hd = hd + (md/60);
    }
    hd = hd * 60;
    dtm = hd + md;
    if(dtm % 60 == 0){vp = 1;}
    if(dtm > 60 && dtm <=120){vp = 2;}
    if(dtm > 120 && dtm <= 180){vp = 4.20;}
    if(dtm > 180 && dtm <= 240){vp = 5.60;}
    if(dtm > 240){if (dtm % 60 != 0)
    {
        vp = (((int) dtm / 60)+1)*2;
    } else {vp = (dtm/60)*2;}
    }
    printf("\n O valor a ser pago pelo estacionamento eh %f", vp);
    return 0;
}
