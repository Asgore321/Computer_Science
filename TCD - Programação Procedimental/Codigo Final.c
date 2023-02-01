#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Constantes Globais
const char Ordem[14] = {'4', '5', '6', '7', 'Q', 'J', 'K', 'A', '2', '3', 'O', 'E', 'C', 'P'};
const char Cartas[10] = {'4', '5', '6', '7', 'Q', 'J', 'K', 'A', '2', '3'};
const char Suits[4] = {5, 3, 6, 4};

char nomeJogador[100];
int Pontos_PlayerG = 0;
int Pontos_MaquinaG = 0;

// Struct para as cartas
typedef struct card
{
    char face;
    char naipe;
    char valor;
} card;

// Struct da Mão
typedef struct Hand
{
    card mao[3];
} Hand;

typedef struct Player
{
    char name[100];
    int vitorias, derrotas;
} Player;

// Funções

void Order(card *M);
void Player_Play(card *round, int primeiro, int MaoDeFerro, int *Correu, int *Valor_Rodada, int *checa, Hand *player, int *Jogadas_Player, int *Truco_Player, Hand *machine, int *Jogadas_Maquina, int *Truco_Maquina, int *Rodadas);
void Machine_Play(card *round, int primeiro, int MaoDeFerro, int *Correu, int *Valor_Rodada, int *checa, Hand *machine, int *Jogadas_Maquina, int *Truco_Maquina, Hand *player, int *Jogadas_Player, int *Truco_Player, int *Rodadas);
int randomico(int MAX);
int TRUCO(int *Valor_Rodada, int quem, int *Truco_Player, int *Truco_Maquina, int *Rodadas, Hand Maquina);
int Aceita_Truco();
void ShowInfo(int *Rodadas, int Valor_Rodada, int rodada, card *Jogadas, int Player_pontos, int Machi_pontos, int placar);
int sobe_desce(void);
void Dealer(Hand *player, Hand *machine, card *Deck);
void ShowHands(Hand player, Hand machine, int Imprime_P, int Imprime_M);
void Shuffle(card *Deck);
void Rodada(card *Disputa, int *Player_R, int *Machi_R, int Round, int *rodadas, int Correu);
void Jogar();
int Aceita_Maquina(int *Rodadas, Hand Maquina);
int Mao11Maquina(Hand Maquina);
void Mao_De_Onze(int Player_pontos, int Machi_pontos, Hand *player, Hand *machine, int *alterna, card *round, int *Valor_Rodada, int *checa, int *Jogadas_Player, int *Truco_Player, int *Jogadas_Maquina, int *Truco_Maquina, int *Player_R, int *Machi_R, int *Round, int *rodadas, card *Deck, int rodada, card *Jogadas);
void adicionarPontosJogador(int vitorias, int derrotas);
void imprimirRanking();
void swap(int *a, int *b);
void swap_string(char *a, char *b);

void main()
{
    int out = 1;
    int escolha = 0;

    // boas vindas ao jogador
    printf("Bem vindo ao jogo de truco!!!\n");

    while (out)
    {
        printf("Esolha uma opcao: \n1 - Jogar\n2 - Rank\n3 - Sobre\n4 - Sair\n->");
        scanf(" %d", &escolha);
        switch (escolha)
        {
        case 1:
            // perguntar o nome do usuário para salvar seus pontos
            printf("Digite seu nome: ");
            getchar();
            fgets(nomeJogador, 100, stdin);
            // remover o \n do final da string
            nomeJogador[strlen(nomeJogador) - 1] = '\0';
            Jogar();
            break;
        case 2:
            system("cls");
            imprimirRanking();
            _sleep(9000);
            system("cls");
            break;
        case 3:
            system("cls");
            printf("--------------------------------------------------------------------\n");
            printf("                             Feito por:\n");
            printf("                   Ihury Kewin de Oliveira Costa\n");
            printf("                   Fabiana Brasil Alves de Sousa\n");
            printf("                       Victor Hugo Rodrigues\n");
            printf("                      Renan Furlanetto Branco\n");
            printf("                              Professor: \n");
            printf("                   Prof. Me. Claudiney R. Tinoco \n");
            printf("\n                Universidade Federal de Uberlandia\n");
            printf("--------------------------------------------------------------------\n");
            _sleep(9000);
            system("cls");
            break;
        case 4:
            printf("Ate mais jogador\n\n\n");
            return;
            break;
        default:
            printf("ERROR");
            printf("Digite de novo: ");
            scanf(" %d", &escolha);
            break;
        }
    }
    return;
}

// Função para decidir a ordem de distribuição das cartas

int sobe_desce(void)
{
    int c = 0;
    int out = 1;
    printf("Faca sua escolha:\n 1 - Sobe \n 2 - Desce\n");
    printf("->");
    scanf(" %d", &c);
    while (out)
    {
        switch (c)
        {
        case 1:
            return 1;
            out = 0;
            break;
        case 2:
            return 2;
            out = 0;
            break;
        default:
            printf("ERROR\n");
            printf("Escolha sua opcao: \n");
            printf("->");
            scanf(" %d", &c);
            out = 1;
            break;
        }
    }
}

// Função para distribuir as cartas aos players

void Dealer(Hand *player, Hand *machine, card *Deck)
{
    int p;
    int m;
    int c = randomico(1);
    // Se a função retornar 1 a distribuição começa por 0
    // c = sobe_desce();
    if (c)
    {
        p = 0;
        m = p + 3;
        for (int i = 0; i < 3; i++)
        {
            player->mao[i].face = Deck[p].face;
            player->mao[i].naipe = Deck[p].naipe;
            player->mao[i].valor = Deck[p].valor;
            Order(&player->mao[i]);
            machine->mao[i].face = Deck[m].face;
            machine->mao[i].naipe = Deck[m].naipe;
            machine->mao[i].valor = Deck[m].valor;
            Order(&machine->mao[i]);
            p++;
            m++;
        }
        // Se a função retornar 0 a distribuição começa pelo topo até 0
    }
    else
    {
        p = 39;
        m = p - 3;
        for (int i = 0; i < 3; i++)
        {
            player->mao[i].face = Deck[p].face;
            player->mao[i].naipe = Deck[p].naipe;
            player->mao[i].valor = Deck[p].valor;
            Order(&player->mao[i]);
            machine->mao[i].face = Deck[m].face;
            machine->mao[i].naipe = Deck[m].naipe;
            machine->mao[i].valor = Deck[m].valor;
            Order(&machine->mao[i]);
            p--;
            m--;
        }
    }
}

// Função para imprimir as mãos

void ShowHands(Hand player, Hand machine, int Imprime_P, int Imprime_M)
{
    if (Imprime_P == 1)
    {
        printf("--------------------------------------------------------------------\n");
        printf("Mao do jogador: \n");
        // Esse 'For' serve para marcar as manilhas visualmente para o usuario e imprimir as cartas do jogador
        for (int i = 0; i < 3; i++)
        {
            if (player.mao[i].valor == 'O')
            {
                printf("%c%c - Ouros \n", player.mao[i].face, player.mao[i].naipe);
            }
            else if (player.mao[i].valor == 'E')
            {
                printf("%c%c - Espadas \n", player.mao[i].face, player.mao[i].naipe);
            }
            else if (player.mao[i].valor == 'C')
            {
                printf("%c%c - Copas \n", player.mao[i].face, player.mao[i].naipe);
            }
            else if (player.mao[i].valor == 'P')
            {
                printf("%c%c - Paus \n", player.mao[i].face, player.mao[i].naipe);
            }
            else
            {
                printf("%c%c \n", player.mao[i].face, player.mao[i].naipe);
            }
        }
    }
    // Parte que imprimi as cartas da Maquina que posteriormente sera desativada
    if (Imprime_M == 1)
    {
        printf("--------------------------------------------------------------------\n");
        printf("Mao da Maquina: \n");
        for (int i = 0; i < 3; i++)
        {
            if (machine.mao[i].valor == 'O')
            {
                printf("%c%c - Ouros \n", machine.mao[i].face, machine.mao[i].naipe);
            }
            else if (machine.mao[i].valor == 'E')
            {
                printf("%c%c - Espadas \n", machine.mao[i].face, machine.mao[i].naipe);
            }
            else if (machine.mao[i].valor == 'C')
            {
                printf("%c%c - Copas \n", machine.mao[i].face, machine.mao[i].naipe);
            }
            else if (machine.mao[i].valor == 'P')
            {
                printf("%c%c - Paus \n", machine.mao[i].face, machine.mao[i].naipe);
            }
            else
            {
                printf("%c%c \n", machine.mao[i].face, machine.mao[i].naipe);
            }
        }
        printf("--------------------------------------------------------------------\n");
    }
}

// Função para embaralhar as cartas dentro do vetor de struct 'Deck'

void Shuffle(card *Deck)
{
    srand(time(NULL));
    int f = 0;
    int n = 0;
    card guarda;
    for (int i = 0; i < 40; i++)
    {
        Deck[i].face = Cartas[f];
        Deck[i].naipe = Suits[n];
        Deck[i].valor = Cartas[f];
        n += 1;
        if (n == 4)
        {
            f += 1;
            n = 0;
        }
    }
    // Algoritmo de Fisher-Yates
    for (int s = 0; s < 40; s++)
    {
        int swap = rand() % 40;
        guarda = Deck[s];
        Deck[s] = Deck[swap];
        Deck[swap] = guarda;
    }
}

// Função para caso as cartas distribuidas sejam manilhas, elas vão para o lugar certo na escala de força

void Order(card *M)
{
    if (M->face == '7')
    {
        if (M->naipe == Suits[1])
        {
            M->valor = 'C';
        }
        else if (M->naipe == Suits[3])
        {
            M->valor = 'O';
        }
    }
    if (M->face == 'A' && M->naipe == Suits[2])
    {
        M->valor = 'E';
    }
    if (M->face == '4' && M->naipe == Suits[0])
    {
        M->valor = 'P';
    }
    return;
}

// Função para simular as jogadas da maquina

void Machine_Play(card *round, int primeiro, int MaoDeFerro, int *Correu, int *Valor_Rodada, int *checa, Hand *machine, int *Jogadas_Maquina, int *Truco_Maquina, Hand *player, int *Jogadas_Player, int *Truco_Player, int *Rodadas)
{
    int i, min_value = 14, min_index = 0, min_index_low = 0, max_value = 0, max_index = 0, chance_truco = 0;
    card Maquina_Jogou, Guarda;

    if (round[0].valor == round[1].valor)
    {
        // Encontrar a carta com maior valor na mão da máquina
        for (i = 0; i < 3 - *Jogadas_Maquina; i++)
        {
            int forca = 0;
            for (int j = 0; j < 14; j++)
            {
                if (machine->mao[i].valor == Ordem[j])
                {
                    forca = j;
                }
            }
            if (forca > max_value)
            {
                max_value = forca;
                max_index = i;
            }
        }
        Maquina_Jogou = machine->mao[max_index];
    }
    else
    {
        // Encontrar a carta com menor valor acima e abaixo da carta jogada pelo player
        for (i = 0; i < 3 - *Jogadas_Maquina; i++)
        {
            if (machine->mao[i].valor > round[0].valor && machine->mao[i].valor < min_value)
            {
                min_value = machine->mao[i].valor;
                min_index = i;
            }
            if (machine->mao[i].valor < min_value)
            {
                min_value = machine->mao[i].valor;
                min_index_low = i;
            }
        }
        if (min_index == 0)
        {
            min_index = min_index_low;
        }
        if (min_index_low != 0 && (machine->mao[min_index_low].valor == 14 && machine->mao[min_index_low - 1].valor == 14))
        {
            // jogar a carta com menor valor
            Maquina_Jogou = machine->mao[min_index_low];
        }
        else
        {
            // Jogar a carta com menor valor acima da carta jogada pelo player, caso contrário jogar a menor carta da mão
            Maquina_Jogou = machine->mao[min_index];
        }
    }

    // Verifica se a máquina tem chance de pedir truco
    if (Pontos_MaquinaG < 11 && *Rodadas != 0)
    {
        if (*Valor_Rodada == 1 && max_value >= 12)
        {
            chance_truco = randomico(100);
            if (chance_truco <= 80)
            {
                printf("A maquina pediu TRUCO\n");
                *Correu = TRUCO(Valor_Rodada, 0, Truco_Player, Truco_Maquina, &Rodadas[0], *machine);
            }
        }
        else if (*Valor_Rodada == -1)
        {
            for (i = 0; i < 3 - *Jogadas_Maquina; i++)
            {
                int forca = 0;
                for (int j = 0; j < 14; j++)
                {
                    if (machine->mao[i].valor == Ordem[j])
                    {
                        forca = j;
                    }
                }
                if (forca > 10)
                {
                    chance_truco += 1;
                }
            }
            if (chance_truco < 2)
            {
                chance_truco = randomico(100);
                if (chance_truco <= 20)
                {
                    printf("A maquina pediu TRUCO\n");
                    *Correu = TRUCO(Valor_Rodada, 0, Truco_Player, Truco_Maquina, &Rodadas[0], *machine);
                }
            }
        }
    }
    if (*Correu)
    {
        *Correu = 1;
        return;
    };

    Guarda = machine->mao[2 - *Jogadas_Maquina];
    machine->mao[2 - *Jogadas_Maquina] = machine->mao[min_index];
    machine->mao[min_index] = Guarda;
    *Jogadas_Maquina += 1;
    printf("A maquina jogou : %c%c \n", Maquina_Jogou.face, Maquina_Jogou.naipe);
    round[1] = Maquina_Jogou;
    if (primeiro)
    {
        Player_Play(round, 0, MaoDeFerro, Correu, Valor_Rodada, checa, player, Jogadas_Player, Truco_Player, machine, Jogadas_Maquina, Truco_Maquina, &Rodadas[0]);
    }
}

// Funçao para o Jogador fazer suas jogadas

void Player_Play(card *round, int primeiro, int MaoDeFerro, int *Correu, int *Valor_Rodada, int *checa, Hand *player, int *Jogadas_Player, int *Truco_Player, Hand *machine, int *Jogadas_Maquina, int *Truco_Maquina, int *Rodadas)
{
    int opcao = 0;
    int out = 1;
    int i;
    int j = 0;
    card Player_Jogou, Guarda;
    printf("Escolha sua Carta: \n");
    if (MaoDeFerro)
    {
        for (i = *Jogadas_Player; i < 3; i++)
        {
            j++;
            printf("%d - ??? \n", j);
        }
        printf("->");
        scanf(" %d", &opcao);
        while (1)
        {
            if (opcao > j)
            {
                printf("ERROR\n");
                printf("Escolha sua opcao: \n");
                printf("->");
                scanf(" %d", &opcao);
            }
            else
            {
                break;
            }
        }
        while (out)
        {
            switch (opcao)
            {
            case 1:
                Player_Jogou = player->mao[*Jogadas_Player];
                printf("Voce jogou: %c%c\n", Player_Jogou.face, Player_Jogou.naipe);
                out = 0;
                break;
            case 2:
                Player_Jogou = player->mao[*Jogadas_Player + 1];
                Guarda = player->mao[*Jogadas_Player];
                player->mao[*Jogadas_Player] = Player_Jogou;
                player->mao[*Jogadas_Player + 1] = Guarda;
                printf("Voce jogou: %c%c\n", Player_Jogou.face, Player_Jogou.naipe);
                out = 0;
                break;
            case 3:
                Player_Jogou = player->mao[2];
                Guarda = player->mao[*Jogadas_Player];
                player->mao[*Jogadas_Player] = Player_Jogou;
                player->mao[2] = Guarda;
                printf("Voce jogou: %c%c\n", Player_Jogou.face, Player_Jogou.naipe);
                out = 0;
                break;
            default:
                printf("ERROR\n");
                printf("Escolha sua opcao: \n");
                printf("->");
                scanf(" %d", &opcao);
                out = 1;
                break;
            }
        }
    }
    else
    {
        if ((Pontos_PlayerG == 0 && Pontos_MaquinaG == 0)||Pontos_PlayerG == 11)
        {
            *Truco_Player = 0;
            *checa = 1;
        };
        for (i = *Jogadas_Player; i < 3; i++)
        {
            j++;
            printf("%d - %c%c \n", j, player->mao[i].face, player->mao[i].naipe);
        }
        if (*Truco_Player)
        {
            printf("%d - TRUCO!!!!\n", j + 1);
        }
        printf("->");
        scanf(" %d", &opcao);
        if (*checa)
        {
            while (1)
            {
                if (opcao > j)
                {
                    printf("ERROR\n");
                    printf("Escolha sua opcao: \n");
                    printf("->");
                    scanf(" %d", &opcao);
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            while (1)
            {
                if (opcao > j + 1)
                {
                    printf("ERROR\n");
                    printf("Escolha sua opcao: \n");
                    printf("->");
                    scanf(" %d", &opcao);
                }
                else
                {
                    if (opcao == (j + 1))
                    {
                        opcao = 4;
                    }
                    break;
                }
            }
        }
    }
    out = 1;
    while (out)
    {
        switch (opcao)
        {
        case 1:
            Player_Jogou = player->mao[*Jogadas_Player];
            out = 0;
            break;
        case 2:
            Player_Jogou = player->mao[*Jogadas_Player + 1];
            Guarda = player->mao[*Jogadas_Player];
            player->mao[*Jogadas_Player] = Player_Jogou;
            player->mao[*Jogadas_Player + 1] = Guarda;
            out = 0;
            break;
        case 3:
            Player_Jogou = player->mao[2];
            Guarda = player->mao[*Jogadas_Player];
            player->mao[*Jogadas_Player] = Player_Jogou;
            player->mao[2] = Guarda;
            out = 0;
            break;
        case 4:
            if (*checa)
            {
                printf("ERROR\n");
                printf("Voce nao pode pedir truco duas vezes\n");
                printf("Escolha sua opcao: \n");
                printf("->");
                scanf(" %d", &opcao);
                out = 1;
            }
            else
            {
                *Correu = TRUCO(Valor_Rodada, 1, Truco_Player, Truco_Maquina, &Rodadas[0], *machine);
                if (*Correu)
                {
                    out = 0;
                    break;
                };
                printf("A maquina aceitou!!!\n");
                printf("Escolha sua opcao: \n");
                printf("->");
                scanf(" %d", &opcao);
                *checa = 1;
                out = 1;
            }
            break;
        default:
            printf("ERROR\n");
            printf("Escolha sua opcao: \n");
            printf("->");
            scanf(" %d", &opcao);
            out = 1;
            break;
        }
    }
    if (*Correu)
    {
        *Correu = 2;
        return;
    };
    if (primeiro)
    {
        Machine_Play(round, 0, MaoDeFerro, Correu, Valor_Rodada, checa, machine, Jogadas_Maquina, Truco_Maquina, player, Jogadas_Player, Truco_Player, &Rodadas[0]);
    }
    *Jogadas_Player += 1;
    round[0] = Player_Jogou;
    return;
}

int randomico(int MAX)
{
    srand(time(NULL));
    return (rand() % MAX);
}

// Função para ver qual a carta mais forte e atribuir os pontos

void Rodada(card *Disputa, int *Player_R, int *Machi_R, int Round, int *rodadas, int Correu)
{
    int forca_p = 0;
    int forca_m = 0;
    if (Correu != 0)
    {
        if (Correu == 1)
        {
            *Machi_R = 2;
            return;
        }
        else if (Correu == 2)
        {
            *Player_R = 2;
            return;
        }
    }
    for (int i = 0; i < 14; i++)
    {
        if (Disputa[0].valor == Ordem[i])
        {
            forca_p = i;
        }
        if (Disputa[1].valor == Ordem[i])
        {
            forca_m = i;
        }
    }
    if (forca_p > forca_m)
    {
        rodadas[Round - 1] = 1;
        *Player_R += 1;
        printf("--------------------------------------------------------------------\n");
        printf("O Player Ganhou a rodada!!! \n");
        printf("--------------------------------------------------------------------\n");
    }
    else if (forca_p == forca_m)
    {
        if (rodadas[0] == 1)
        {
            *Player_R += 1;
        }
        else if (rodadas[0] == 2)
        {
            *Machi_R += 1;
        }
        else if (Round == 1)
        {
            *Machi_R += 1;
            *Player_R += 1;
        }
        rodadas[Round - 1] = 3;
        printf("--------------------------------------------------------------------\n");
        printf("Empate!!! \n");
        printf("--------------------------------------------------------------------\n");
    }
    else if (forca_m > forca_p)
    {
        rodadas[Round - 1] = 2;
        *Machi_R += 1;
        printf("--------------------------------------------------------------------\n");
        printf("A Maquina Ganhou a rodada!!! \n");
        printf("--------------------------------------------------------------------\n");
    }
    return;
}

// Função para pedir Truco

int TRUCO(int *Valor_Rodada, int quem, int *Truco_Player, int *Truco_Maquina, int *Rodadas, Hand Maquina)
{
    if (quem)
    {
        if (Aceita_Maquina(&Rodadas[0], Maquina))
        {
            if (*Valor_Rodada == 1)
            {
                *Valor_Rodada = 3;
            }
            else if (*Valor_Rodada <= 9)
            {
                *Valor_Rodada += 3;
            }
            *Truco_Player = 0;
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (Aceita_Truco(&Rodadas[0], Maquina))
        {
            if (*Valor_Rodada == 1)
            {
                *Valor_Rodada = 3;
            }
            else
            {
                *Valor_Rodada += 3;
            }
            *Truco_Maquina = 0;
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int cartas_altas_10(Hand Maquina)
{
    int contador = 0;
    for (int i = 0; i < 3; i++)
    {
        if (Maquina.mao[i].valor >= 10)
            contador++;
    }
    return contador;
}

// Função de inteligencia da maquina para aceitar a Mao de 11

int Mao11Maquina(Hand Maquina)
{
    // O ponteiro int *Rodadas é um vetor de tamanho 3, onde cada posição representa uma rodada
    // Se o valor for 1, o PLayer Ganhou a rodada. Se for 2, a maquina. Se for 3 foi empate.
    // Use das variaveis Globais Maquina_PontosG e da Player_PontosG
    // Retorne 1 para jogar a mão e 0 para Correr
    int contador = 0;

    // Contar o número de cartas com valor maior que 8 na mão da máquina
    for (int i = 0; i < 3; i++)
    {
        int forca = 0;
        for (int j = 0; j < 14; j++)
        {
            if (Maquina.mao[i].valor == Ordem[j])
            {
                forca = j;
            }
        }
        if (forca >= 7)
            contador++;
    }
    // Jogar a mão se a máquina tiver duas cartas com valores maiores que 8
    if (contador >= 2)
        return 1;
    else
        return 0;
}

// Função de inteligencia da maquina para aceitar o truco

int Aceita_Maquina(int *Rodadas, Hand Maquina)
{
    // O ponteiro int *Rodadas é um vetor de tamanho 3, onde cada posição representa uma rodada
    // Se o valor for 1, o PLayer Ganhou a rodada. Se for 2, a maquina. Se for 3 foi empate.
    // Use das variáveis Globais Maquina_PontosG e da Player_PontosG
    // Retorne 1 para aceitar o Truco e 0 para correr
    int contador = 0;
    int cartas_altas = 0;

    // Contar o número de rodadas ganhas pela máquina
    for (int i = 0; i < 3; i++)
    {
        if (Rodadas[i] == 2)
            contador++;
    }

    // Contar o número de cartas com valor maior que 8 na mão da máquina
    for (int i = 0; i < 3; i++)
    {
        if (Maquina.mao[i].valor >= 8)
            cartas_altas++;
    }

    // Contar o número de rodadas ganhas pelo player
    int player_rodadas_ganhas = 0;
    for (int i = 0; i < 3; i++)
    {
        if (Rodadas[i] == 1)
            player_rodadas_ganhas++;
    }

    // Aceitar o Truco se:
    // a) a máquina ganhou pelo menos uma rodada e tem pelo menos uma carta com valor maior que 10 na mão
    // b) o player ganhou 1 ou menos rodadas e a máquina tem pelo menos duas cartas com valor maior que 8 na mão
    if ((contador > 0 && cartas_altas_10(Maquina) > 0) ||
        (player_rodadas_ganhas <= 1 && cartas_altas >= 2))
        return 1;
    else
        return 0;
}

// Função para aceitar ou Correr

int Aceita_Truco()
{
    int opcao = 0;
    printf("--------------------------------------------------------------------\n");
    printf("Voce Aceita o truco?\n1 - SIM\n2 - NAO\n->");
    scanf(" %d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Voce aceitou!!\n");
        return 1;
        break;
    case 2:
        printf("Voce correu!!\n");
        return 0;
        break;
    default:
        printf("Opcao invalida\n");
        printf("Escolha de novo: \n->");
        scanf(" %d", &opcao);
        break;
    }
}

// Função para mostrar as informações da rodada

void ShowInfo(int *Rodadas, int Valor_Rodada, int rodada, card *Jogadas, int Player_pontos, int Machi_pontos, int placar)
{
    char Vencedores[3][8];
    char Jogador[8] = {"Player\0"};
    char Maquina[8] = {"Maquina\0"};
    char Empate[8] = {"Empate\0"};
    for (int l = 0; l < 3; l++)
    {
        switch (Rodadas[l])
        {
        case 1:
            strcpy(Vencedores[l], Jogador);
            break;
        case 2:
            strcpy(Vencedores[l], Maquina);
            break;
        case 3:
            strcpy(Vencedores[l], Empate);
            break;
        }
    }
    int i = 1;
    if (placar)
    {
        printf("--------------------------------------------------------------------\n");
        printf("Player Pontos = %d\n", Player_pontos);
        printf("Maquina Pontos = %d\n", Machi_pontos);
        printf("--------------------------------------------------------------------\n");
    }
    printf("A rodada esta valendo: %d ", Valor_Rodada);
    if (rodada > 1)
    {
        printf("   Cartas jogadas: %d - %c%c %c%c - Vencedor - %s\n", i, Jogadas[0].face, Jogadas[0].naipe, Jogadas[1].face, Jogadas[1].naipe, Vencedores[0]);
    }
    if (rodada > 2)
    {
        printf("                                            %d - %c%c %c%c              %s\n", 2, Jogadas[2].face, Jogadas[2].naipe, Jogadas[3].face, Jogadas[3].naipe, Vencedores[1]);
    }
    printf("\n");
}

// Função que envolve os jogo em si

void Jogar()
{
    Hand player, machine;
    card Deck[40];
    int checa = 0;
    int Jogadas_Maquina = 0, Jogadas_Player = 0;
    int Truco_Player = 1, Truco_Maquina = 1;
    int primeiro = randomico(1);
    int Valor_Rodada = 1;
    int rodada = 1;
    int Tento = 1;
    int alterna = primeiro;
    int Player_pontos = 0;
    int Player_R = 0;
    int Machi_pontos = 0;
    int Machi_R = 0;
    int rodadas[3] = {0, 0, 0};
    int i, j;
    int Correu = 0;
    int Mao_11 = 0;
    card round[2];
    card Jogadas[6];
    int indice = 0;
    system("cls");
    while (Player_pontos < 12 && Machi_pontos < 12)
    {
        if (Player_pontos == 11 || Machi_pontos == 11)
        {
            Mao_11 = 1;
        }
        if (Mao_11 == 1)
        {
            Shuffle(&Deck[0]);
            Dealer(&player, &machine, &Deck[0]);
            Mao_De_Onze(Player_pontos, Machi_pontos, &player, &machine, &alterna, &round[0], &Valor_Rodada, &checa, &Jogadas_Player, &Truco_Player, &Jogadas_Maquina, &Truco_Maquina, &Player_R, &Machi_R, &Tento, &rodadas[0], &Deck[0], rodada, &Jogadas[0]);
        }
        else
        {
            if (primeiro)
            {
                Shuffle(&Deck[0]);
                Dealer(&player, &machine, &Deck[0]);
                ShowHands(player, machine, 1, 0);
                for (i = 1; i < 4; i++)
                {
                    if (Player_R == 2 || Machi_R == 2)
                    {
                        break;
                    }
                    ShowInfo(&rodadas[0], Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                    if (alterna)
                    {
                        Player_Play(&round[0], 1, 0, &Correu, &Valor_Rodada, &checa, &player, &Jogadas_Player, &Truco_Player, &machine, &Jogadas_Maquina, &Truco_Maquina, &rodadas[0]);
                        Rodada(&round[0], &Player_R, &Machi_R, rodada, &rodadas[0], Correu);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        Tento++;
                        rodada++;
                        alterna = 0;
                        _sleep(2000);
                        system("cls");
                    }
                    else
                    {
                        Machine_Play(&round[0], 1, 0, &Correu, &Valor_Rodada, &checa, &machine, &Jogadas_Maquina, &Truco_Maquina, &player, &Jogadas_Player, &Truco_Player, &rodadas[0]);
                        Rodada(&round[0], &Player_R, &Machi_R, rodada, &rodadas[0], Correu);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        Tento++;
                        rodada++;
                        alterna = 1;
                        _sleep(2000);
                        system("cls");
                    }
                    if (Correu)
                    {
                        break;
                    };
                    // printf("\nTento/Round = %d\n", Tento);
                }
                primeiro = 0;
            }
            else
            {
                Shuffle(&Deck[0]);
                Dealer(&player, &machine, &Deck[0]);
                ShowHands(player, machine, 1, 0);
                for (j = 1; j < 4; j++)
                {
                    if (Player_R == 2 || Machi_R == 2)
                    {
                        break;
                    }
                    ShowInfo(&rodadas[0], Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                    if (alterna)
                    {
                        Player_Play(&round[0], 1, 0, &Correu, &Valor_Rodada, &checa, &player, &Jogadas_Player, &Truco_Player, &machine, &Jogadas_Maquina, &Truco_Maquina, &rodadas[0]);
                        Rodada(&round[0], &Player_R, &Machi_R, rodada, &rodadas[0], Correu);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        rodada++;
                        Tento++;
                        alterna = 0;
                        _sleep(2000);
                        system("cls");
                    }
                    else
                    {
                        Machine_Play(&round[0], 1, 0, &Correu, &Valor_Rodada, &checa, &machine, &Jogadas_Maquina, &Truco_Maquina, &player, &Jogadas_Player, &Truco_Player, &rodadas[0]);
                        Rodada(&round[0], &Player_R, &Machi_R, rodada, &rodadas[0], Correu);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        Tento++;
                        rodada++;
                        alterna = 1;
                        _sleep(2000);
                        system("cls");
                    }
                    if (Correu)
                    {
                        break;
                    };
                    // printf("\nTento/Round = %d\n", Tento);
                }
                primeiro = 1;
            }
        }
        if (Player_R == 2 || Correu == 2)
        {
            Player_pontos += Valor_Rodada;
            Pontos_PlayerG = Player_pontos;
            printf("--------------------------------------------------------------------\n");
            printf("                      O Player Ganhou o Tento!!!                    \n");
            printf("--------------------------------------------------------------------\n");
        }
        else if (Machi_R == 2 || Correu == 1)
        {
            Machi_pontos += Valor_Rodada;
            Pontos_MaquinaG = Machi_pontos;
            printf("--------------------------------------------------------------------\n");
            printf("                      A Maquina Ganhou o Tento!!!                   \n");
            printf("--------------------------------------------------------------------\n");
        }
        else if (Machi_R == 0 && Player_R == 0)
        {
            printf("Todas as rodadas empataram\n");
            printf("Ninguem ganhou um tento\n");
        }
        i = 1;
        j = 1;
        Valor_Rodada = 1;
        Truco_Player = 1;
        Truco_Maquina = 1;
        indice = 0;
        Correu = 0;
        rodada = 1;
        Jogadas_Player = 0;
        Jogadas_Maquina = 0;
        Machi_R = 0;
        Player_R = 0;
        checa = 0;
        for (int v = 0; v < 3; v++)
        {
            rodadas[v] = 0;
        }
        printf("--------------------------------------------------------------------\n");
        printf("Player Pontos = %d\n", Player_pontos);
        printf("Maquina Pontos = %d\n", Machi_pontos);
        printf("--------------------------------------------------------------------\n");
    }
    printf("Jogo Acabou\n");
    if (Player_pontos >= 12)
    {
        printf("Player Ganhou\n");
        adicionarPontosJogador(1, 0);
    }
    else if (Machi_pontos >= 12)
    {
        printf("Maquina Ganhou\n");
        adicionarPontosJogador(0, 1);
    }
    _sleep(2000);
    system("cls");
    return;
}

// Funcao da mao de onze

void Mao_De_Onze(int Player_pontos, int Machi_pontos, Hand *player, Hand *machine, int *alterna, card *round, int *Valor_Rodada, int *checa, int *Jogadas_Player, int *Truco_Player, int *Jogadas_Maquina, int *Truco_Maquina, int *Player_R, int *Machi_R, int *Round, int *rodadas, card *Deck, int rodada, card *Jogadas)
{
    int Aceita_P;
    int indice = 0;
    int out = 1;
    int false = 0;
    if (Player_pontos == 11 && Machi_pontos == 11)
    {
        printf("\n--------------------------------------------------------------------\n");
        printf("O jogo esta na mao de Ferro\n");
        printf("--------------------------------------------------------------------\n");
        for (int i = 1; i < 4; i++)
        {
            if (*alterna == 1)
            {
                if (*Player_R == 2 || *Machi_R == 2)
                {
                    break;
                }
                ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                Player_Play(&round[0], 1, 1, &false, Valor_Rodada, checa, player, Jogadas_Player, Truco_Player, machine, Jogadas_Maquina, Truco_Maquina, &rodadas[0]);
                Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                Jogadas[indice] = round[0];
                indice++;
                Jogadas[indice] = round[1];
                indice++;
                rodada++;
                *alterna = 0;
                _sleep(2000);
                system("cls");
            }
            else if (*alterna == 0)
            {
                if (*Player_R == 2 || *Machi_R == 2)
                {
                    break;
                }
                ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                Machine_Play(&round[0], 1, 1, &false, Valor_Rodada, checa, machine, Jogadas_Maquina, Truco_Maquina, player, Jogadas_Player, Truco_Player, &rodadas[0]);
                Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                Jogadas[indice] = round[0];
                indice++;
                Jogadas[indice] = round[1];
                indice++;
                rodada++;
                *alterna = 1;
                _sleep(2000);
                system("cls");
            }
        }
    }
    else if (Player_pontos == 11)
    {
        printf("--------------------------------------------------------------------\n");
        printf("                      O player esta na mao de 11\n");
        printf("--------------------------------------------------------------------\n");
        printf("Esta eh sua mao: \n");
        ShowHands(*player, *machine, 1, 0);
        printf("Vode deseja Jogar a MAO?\n");
        printf("1 - SIM\n");
        printf("2 - NAO\n->");
        scanf(" %d", &Aceita_P);
        while (out)
        {
            switch (Aceita_P)
            {
            case 1:
                for (int i = 1; i < 4; i++)
                {
                    if (*alterna == 1)
                    {
                        if (*Player_R == 2 || *Machi_R == 2)
                        {
                            break;
                        }
                        ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                        Player_Play(&round[0], 1, 0, &false, Valor_Rodada, checa, player, Jogadas_Player, Truco_Player, machine, Jogadas_Maquina, Truco_Maquina, &rodadas[0]);
                        Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        rodada++;
                        *alterna = 0;
                        _sleep(2000);
                        system("cls");
                    }
                    else if (*alterna == 0)
                    {
                        if (*Player_R == 2 || *Machi_R == 2)
                        {
                            break;
                        }
                        ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                        Machine_Play(&round[0], 1, 0, &false, Valor_Rodada, checa, machine, Jogadas_Maquina, Truco_Maquina, player, Jogadas_Player, Truco_Player, &rodadas[0]);
                        Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                        Jogadas[indice] = round[0];
                        indice++;
                        Jogadas[indice] = round[1];
                        indice++;
                        rodada++;
                        *alterna = 1;
                        _sleep(2000);
                        system("cls");
                    }
                }
                out = 0;
                break;
            case 2:
                *Machi_R = 2;
                printf("------------------------O PLAYER CORREU DA MAO----------------------\n");
                _sleep(2000);
                system("cls");
                out = 0;
                break;
            default:
                printf("ERROR");
                printf("Digite um valor valido:\n->");
                scanf(" %d", &Aceita_P);
                out = 1;
                break;
            }
        }
    }
    else if (Machi_pontos == 11)
    {
        printf("--------------------------------------------------------------------\n");
        printf("                      A maquina esta na mao de 11\n");
        printf("--------------------------------------------------------------------\n");
        if (Mao11Maquina(*machine))
        {
            printf("                       A MAQUINA ACEITOU A MAO\n");
            ShowHands(*player, *machine, 1, 0);
            for (int i = 1; i < 4; i++)
            {
                if (*alterna == 1)
                {
                    if (*Player_R == 2 || *Machi_R == 2)
                    {
                        break;
                    }
                    ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                    Player_Play(&round[0], 1, 0, &false, Valor_Rodada, checa, player, Jogadas_Player, Truco_Player, machine, Jogadas_Maquina, Truco_Maquina, &rodadas[0]);
                    Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                    Jogadas[indice] = round[0];
                    indice++;
                    Jogadas[indice] = round[1];
                    indice++;
                    rodada++;
                    *alterna = 0;
                    _sleep(2000);
                    system("cls");
                }
                else if (*alterna == 0)
                {
                    if (*Player_R == 2 || *Machi_R == 2)
                    {
                        break;
                    }
                    ShowInfo(&rodadas[0], *Valor_Rodada, rodada, &Jogadas[0], Player_pontos, Machi_pontos, 1);
                    Machine_Play(&round[0], 1, 0, &false, Valor_Rodada, checa, machine, Jogadas_Maquina, Truco_Maquina, player, Jogadas_Player, Truco_Player, &rodadas[0]);
                    Rodada(&round[0], Player_R, Machi_R, rodada, &rodadas[0], 0);
                    Jogadas[indice] = round[0];
                    ++indice;
                    Jogadas[indice] = round[1];
                    ++indice;
                    rodada++;
                    *alterna = 1;
                    _sleep(2000);
                    system("cls");
                }
            }
        }
        else
        {
            *Player_R = 2;
            printf("-----------------------A MAQUINA CORREU DA MAO----------------------\n");
            _sleep(2000);
        }
    }
    return;
}

void swap_string(char *a, char *b)
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para imprimir o rankingo dos players

void imprimirRanking()
{
    // abertura do arquivo onde os pontos serão armazenados lidos e escritos
    FILE *arquivo = fopen("pontos.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo de pontos!\n");
        return;
    }

    // variáveis auxiliares
    char nome[100];
    char derrotas[100];
    char vitorias[100];
    char linha[100];
    char *token;
    int i, j;
    int jogadores[10][3]; // armazena as vitórias e as derrotas dos jogadores
    char jogadores_nome[10][100];
    int numJogadores = 0;

    // ler o arquivo linha por linha
    while (fgets(linha, 100, arquivo) != NULL)
    {
        // separar a linha em tokens
        token = strtok(linha, ",");
        strcpy(nome, token);
        token = strtok(NULL, ",");
        strcpy(vitorias, token);
        token = strtok(NULL, ",");
        strcpy(derrotas, token);

        jogadores[numJogadores][0] = atoi(vitorias);
        jogadores[numJogadores][1] = atoi(derrotas);
        jogadores[numJogadores][2] = numJogadores;
        strcpy(jogadores_nome[numJogadores], nome);
        numJogadores++;
    }
    if (numJogadores == 0)
    {
        printf("Não há nenhuma pontuação registrada ainda!\n");
    }
    else
    {
        for (i = 0; i < numJogadores; i++)
        {
            for (j = i + 1; j < numJogadores; j++)
            {
                if (jogadores[i][0] < jogadores[j][0])
                {
                    swap(jogadores[i], jogadores[j]);
                    swap_string(jogadores_nome[i], jogadores_nome[j]);
                }
            }
        }
        printf("Ranking de jogadores:\n");
        printf("Nome\t\tVitorias\tDerrotas\n");
        for (i = 0; i < numJogadores && i < 10; i++)
        {
            printf("%s\t\t%d\t\t%d\n", jogadores_nome[i], jogadores[i][0], jogadores[i][1]);
        }
    }

    // fechamento do arquivo
    fclose(arquivo);
}

// Função para adicionar pontos no ranking

void adicionarPontosJogador(int vitorias, int derrotas)
{
    // abertura do arquivo para ler os pontos que estão salvos
    FILE *arquivo = fopen("pontos.txt", "r");
    Player *players;
    int i = 0;

    if (arquivo != NULL)
    {
        char linha[150], vitorias[10], derrotas[10], *token;

        while (fgets(linha, 100, arquivo) != NULL)
        {
            if (linha[0] == '\n') // se a linha for vazia, pula para a próxima
                continue;
            i++;
            if (i == 1)
                players = (Player *)malloc(sizeof(Player));
            else
                players = (Player *)realloc(players, sizeof(Player) * (i + 1));
            // remover o \n do final da string
            linha[strlen(linha) - 1] = '\0';

            // separar os dados da linha
            token = strtok(linha, ",");
            strcpy(players[i - 1].name, token);

            token = strtok(NULL, ",");
            players[i - 1].vitorias = atoi(token);

            token = strtok(NULL, ",");
            players[i - 1].derrotas = atoi(token);
        }
    }

    // reescrevendo o arquivo com os pontos atualizados
    arquivo = fopen("pontos.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    int achou = 0;

    for (int j = 0; j < i; j++)
    {
        if (strcmp(players[j].name, nomeJogador) == 0)
        {
            // atualizar os pontos do jogador
            players[j].vitorias += vitorias;
            players[j].derrotas += derrotas;
            achou = 1;
        }

        // escrever os dados no arquivo
        fprintf(arquivo, "%s,%d,%d\n", players[j].name, players[j].vitorias, players[j].derrotas);
    }

    // liberar a memória
    if (i > 0)
        free(players);

    // adicionar o player na lista caso ele não tenha sido encontrado
    if (!achou)
    {
        fprintf(arquivo, "%s,%d,%d\n", nomeJogador, vitorias, derrotas);
    }

    fclose(arquivo);

    return;
}
