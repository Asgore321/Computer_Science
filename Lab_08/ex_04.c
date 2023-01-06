#include <stdio.h>
#include <stdlib.h>

struct alunos
{
    char nome[50];
    char matricula[20];
    float p[3];
};

float media(float k[3]){
    return (k[0] + k[1] + k[2])/3;
}

typedef struct alunos StrAlu;

int main(){
    StrAlu alunos[5];
    float m_p1, p_p1;
    float M_m, p_M, m_m, p_m;
    m_p1 = 0.0;p_p1 = 0.0; M_m = 0.0; p_M = 0.0; m_m = 11.0; p_m = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do %d aluno: ", i+1);
        fgets(alunos[i].nome,50,stdin);
        printf("Digite a matricula do %d aluno: ", i+1);
        fgets(alunos[i].matricula,20,stdin);
        for (int k = 0; k < 3; k++)
        {
            printf("Digite a nota da %d prova: ", k+1);
            scanf(" %f", &alunos[i].p[k]);
            setbuf(stdin,NULL);
        }
        if ( media(alunos[i].p) >= 6)
        {
            printf("O aluno passou\n");
        }else{
            printf("O aluno nao passou\n");
        }
    }
    for ( int i = 0; i < 5; i++)
    {
        if (media(alunos[i].p) > M_m)
        {
            M_m = media(alunos[i].p);
            p_M = i;
        }else if (media(alunos[i].p) < m_m)
        {
            m_m = media(alunos[i].p);
            p_m = i;
        }
        
        if (alunos[i].p[0] > m_p1)
        {
            m_p1 = alunos[i].p[0];
            p_p1 = i;
        }  
    }
    printf("O aluno com a maior nota na p1 foi o: ");
    for (int i = 0; alunos[(int)p_p1].nome[i] != '\n'; i++)
    {
        printf("%c",alunos[(int)p_p1].nome[i]);
    }
    printf("O aluno com a maior media foi: ");
    for (int i = 0; alunos[(int)p_M].nome[i] != '\n'; i++)
    {
        printf("%c", alunos[(int)p_M].nome[i]);
    }
    printf("O aluno com a menor media foi: ");
    for (int i = 0; alunos[(int)p_m].nome[i] != '\n'; i++)
    {
        printf("%c", alunos[(int)p_m].nome[i]);
    }
    
    
    
    return 0;
}
