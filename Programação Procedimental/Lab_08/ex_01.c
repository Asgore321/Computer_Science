#include <stdio.h>

struct hora
{
    int hora, minuto, segundo;
};

struct data
{
    int dia, mes, ano;
};

struct compromisso
{
    struct data;
    struct hora;
    char descreve[100];
};


