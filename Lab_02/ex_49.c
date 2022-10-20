#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, h, m, sf, mf, hf, si, mi, hi, D;
    printf("Digite a hora os minutos e os segundos de inicio, e a duracao em segundos do experimento: ");
    scanf("%d %d %d %d", &hi, &mi, &si, &s);
    sf = si + s;
    if (sf >= 60)
    {
        m = sf / 60;
        sf = sf%60;
    }
    mf = mi + m;
    if (mf >= 60)
    {
        h = mf / 60;
        mf = mf%60;
    }
    hf = h + hi;
    if (hf >= 24)
    {
        D = hf/24;
        hf = hf%24;
        printf("O experimento terminara amanha as %d horas %d minutos e %d segundos", hf, mf, sf);
    } else{
        printf("O experimento terminara as %d horas %d minutos e %d segundos", hf, mf, sf);
    }
        return 0;
}