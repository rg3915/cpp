/*
    Curso :    Introducao a Programacao - Verao 2012
    Turma :    1 - Diurno
    Nome  :    Edson Morais da Cruz
    Data  :    05/01/2012

    Programa :  EP2   -   Jogo Campo Minado
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define DIMM 17 /* o tamanho maximo da matriz esta como 17 para que as coordenadas da coluna e da linha comece do 1. */
#define MAXTELA 21 /* Tamanho maximo da matriz que aparece para o jogador, pois utiliza colunas a direita para identificar o numero da linha. */
#define MAXBM 20
using namespace std;

/* A funcao abaixo zerar a regiao do jogo. */
void zera_regiao(char mat[DIMM][DIMM], int n)
{
    int i, j;
    for(i = 0; i <= n; i ++)
        for(j = 0; j <= n; j ++)
            mat[i][j] = '0';
}

/* A funcao abaixo cria a regiao do jogo com o tamanho e a quantidade de minas
   escolhida pelo jogador. */
void gera_regiao(char mat[DIMM][DIMM], int n, int nbombas)
{
    int bombas = 0, i = 0, j = 0;
    srand(time(0));
    while(bombas < nbombas)
    {
        i = (int)((n + 1) * (rand()/(RAND_MAX + 1.0)));
        j = (int)((n + 1) * (rand()/(RAND_MAX + 1.0)));
        if(mat[i][j] != 'b')
        {
            if(i > 0 && j > 0)
            {
                mat[i][j] = 'b';
                bombas ++;
            }
        }
    }
    for(i = 1; i <= n; i ++)
        for(j = 1; j <= n; j ++)
            if(mat[i][j] != 'b')
                mat[i][j] = '0';
}

/* A funcao abaixo conta a quantidade de minas em volta de uma subregiao. */
void prenche_regiao(char mat[DIMM][DIMM], int n)
{
    int k, i, j, t;
    for(i = 1; i <= n; i ++)
    {
        for(j = 1; j <= n; j ++)
        {
            if(mat[i][j] != 'b')
            {
                for(t = i - 1; t <= i + 1; t ++)
                    for(k = j - 1; k <= j + 1; k ++)
                    {
                        if (t != 0 && k != 0)
                            if (!(t == i && k == j) && mat[t][k] == 'b')
                            {
                                mat[i][j] += 1;
                            }
                    }
            }
        }
    }
}

/* A funcao abaixo imprime na tela toda a regiao do jogo visivel para o jogador, juntamente
   com a numeracao das linhas. */
void escreva_regiao_tela(char tela[MAXTELA][MAXTELA], int n)
{
    int i, j;
    char c = '1';
    tela[0][n + 1] = ' ';
    tela[0][n + 2] = ' ';
    tela[0][n + 3] = ' ';
    tela[0][n + 4] = ' ';
    for (i = 1; i <=  n; i ++)
    {
        tela[i][n + 1] = '|';
        if(i == 10)
            c = '0';
        if (i < 10)
            tela[i][n + 2] = '0';
        else
            tela[i][n + 2] = '1';
        tela[i][n + 3] = c;
        tela[i][n + 4] = '|';
        c ++;
    }
    for(i = 1; i <= n; i ++)
        for(j = 0; j <= n; j ++)
            tela[i][j] = '-';
    for(i = 1; i <= n; i ++)
    {
        for(j = 1; j <= n + 4; j ++)
        {
            if (j >= n + 1)
                cout << tela[i][j];
            else
                cout << tela[i][j] << "  ";
        }
        cout << endl;
    }
}

/* A funcao abaixo verifica se uma subregiao ja foi revelada ou nao. */
void escolha_subregiao(char mat[DIMM][DIMM], char tela[MAXTELA][MAXTELA], int i, int j, int *subregiao, int *revelada)
{
    if (mat[i][j] != 'b')
        *subregiao = 1;
    else
        *subregiao = 0;
    if (tela[i][j] != '-')
        *revelada = 1;
    else
        *revelada = 0;
    if (*revelada == 1)
        cout << "subregiao ja revelada! Escolha outra" << endl;
    tela[i][j] = mat[i][j];
}

/* A funcao abaixo mostra os valores escondidos ao redor da regiao
   escolhida pelo jogador que nao e bomba.. */
void revela_subregiao(char mat[DIMM][DIMM], char tela[MAXTELA][MAXTELA], int i, int j, int n)
{
    if (mat[i][j] == '0')
    {
        if (mat[i - 1][j - 1] != 'b')
            if ((i > 1) && (j > 1))
                tela[i - 1][j - 1] = mat[i - 1][j - 1];
        if (mat[i - 1][j] != 'b')
            if ((i > 1) && (j > 0))
                tela[i - 1][j] = mat[i - 1][j];
        if (mat[i - 1][j + 1] != 'b')
            if ((i > 1) && (j < n))
                tela[i - 1][j + 1] = mat[i - 1][j + 1];
        if (mat[i][j - 1] != 'b')
            if ((i > 0) && (j > 1))
                tela[i][j - 1] = mat[i][j - 1];
        if (mat[i][j + 1] != 'b')
            if ((i > 0) && (j < n))
                tela[i][j + 1] = mat[i][j + 1];
        if (mat[i + 1][j - 1] != 'b')
            if ((i < n) && (j > 1))
                tela[i + 1][j - 1] = mat[i + 1][j - 1];
        if (mat[i + 1][j] != 'b')
            if ((i < n) && (j > 0))
                tela[i + 1][j] = mat[i + 1][j];
        if (mat[i + 1][j + 1] != 'b')
            if ((i < n) && (j < n))
                tela[i + 1][j + 1] = mat[i + 1][j + 1];
    }
    else
    {
        if (mat[i - 1][j - 1] == '0')
            if ((i > 1) && (j > 1))
                tela[i - 1][j - 1] = mat[i - 1][j - 1];
        if (mat[i - 1][j] == '0')
            if (i > 1)
                tela[i - 1][j] = mat[i - 1][j];
        if (mat[i - 1][j + 1] == '0')
            if ((i > 1) && (j < n))
                tela[i - 1][j + 1] = mat[i - 1][j + 1];
        if (mat[i][j - 1] == '0')
            if (j > 1)
                tela[i][j - 1] = mat[i][j - 1];
        if (mat[i][j + 1] == '0')
            if (j < n)
                tela[i][j + 1] = mat[i - 1][j + 1];
        if (mat[i + 1][j - 1] == '0')
            if ((i < n) && (j > 1))
                tela[i + 1][j - 1] = mat[i + 1][j - 1];
        if (mat[i + 1][j] == '0')
            if (i < n)
                tela[i + 1][j] = mat[i + 1][j];
        if (mat[i + 1][j + 1] == '0')
            if ((i < n) && (j < n))
                tela[i + 1][j + 1] = mat[i + 1][j + 1];
    }
}

/* A funcao abaixo imprime o cabecalho que identifica a quantidade de colunas do jogo. */
void cabecalho(int n)
{
    int cab[DIMM], j, x = 0, y = 1;
    for(j = 0; j < n; j ++)
    {
        if(j == 9)
        {
            x = 1;
            y = 0;
        }
        cab[j] = x;
        cab[j + 1] = y;
        cout << cab[j] << cab[j + 1] << " ";
        y ++;
    }
}

int main ()
{
    int n, nbombas, i, j, x, y, subregiao = 1, revelada = 0, s, completo, ganhou = 0, bombas_escondidas, sem_bomba = 0,
        revelou, falta_revelar, nao_revelado;
    char mat[DIMM][DIMM], tela[MAXTELA][MAXTELA];
    cout << "Minas" << endl << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    cout << "Regras do jogo!" << endl << endl;
    cout << "* O jogador deve escolher uma linha e uma coluna para uma sub-regiao;" << endl;
    cout << "* O jogador perde ao escolher uma sub-regiao que contenha uma bomba(b);" << endl;
    cout << "* Se a sub-regiao for '0', revela-se todas sub-regioes adjacentes;" << endl;
    cout << "* A sub-regiao revelada indica quantas bombas tem ao redor;" << endl;
    cout << "* O jogador deve revelar todas as sub-regioes que nao contenham bombas." << endl;
    cout << "------------------------------------------------------------------------------" << endl << endl;
    do
    {
        cout << "Entre com o tamanho do jogo(entre 2 e " << DIMM - 1 << "): ";
        cin >> n;
        if (n >= DIMM || n < 2)
            cout << "Tamanho Invalido!" << endl << "Entre com um tamanho valido!" << endl;
    }while(n < 2 || n >= DIMM);
    /* Este laço abaixo verifica se a quantidade de bombas esta de acordo com o tamanho da matriz do jogo e menor que o maximo de bombas. */
    do
    {
        cout << "Entre com a quantidade de bombas(entre 1 e " << MAXBM << "): ";
        cin >> nbombas;
        if (nbombas < 1)
            cout << "Quantidade de bombas menor do que '1' !" << endl << "Entre com um tamanho valido!" << endl;
        if ((n * n) < nbombas)
        {
            cout << "Quantidade de bombas maior do que as sub-regioes do jogo!" << endl;
            cout << "Entre com um tamanho menor que " << (n * n) << " !"<< endl;
        }
        if ((n * n) == nbombas)
        {
            cout << "Quantidade de bombas ocupa todo o jogo!" << endl;
            cout << "Entre com um tamanho menor que '" << (n * n) << "'!"<< endl;
        }
        if (n > MAXBM)
            cout << "Tamanho Invalido!" << endl << "Entre com um tamanho valido!" << endl;
    }while((n * n) <= nbombas || n > MAXBM || nbombas < 1);
    zera_regiao(mat, n);
    gera_regiao(mat, n, nbombas);
    prenche_regiao(mat, n);
    cout << endl;
    /* Abaixo o programa insere o cabeçalho contendo o numero das colunas seguido da matriz visivel para o jogador. */
    cabecalho(n);
    cout << endl;
    for (s = 0; s <= n; s ++)
        cout << "---";
    cout << endl;
    escreva_regiao_tela(tela, n);
    nao_revelado = 0;
    /* Este for serve para verificar a quantidade de sub-regioes sem bomba. */
    for (x = 1; x <= n; x ++)
        for (y = 1; y <= n; y ++)
            if (tela[x][y] == '-')
                nao_revelado ++;
    sem_bomba = nao_revelado - nbombas;
    cout << endl;
    completo = 0;
    /* Este laço abaixo e o que verifica se o jogador ganhou ou nao. */
    do
    {
        /* Este laço abaixo verifica se a sub-regiao escolhida ja foi revelada. */
        do
        {
            /* Este laço abaixo verifica e garante que o jogador entre com uma coordenada valida da matriz. */
            do
            {
                cout << "Faca uma jogada (linha e coluna): ";
                cin >> i >> j;
                if((i > n) || (j > n))
                {
                    cout << "Linha ou Coluna maior que " << n << "." << endl;
                    cout << "Faca outra jogada!" << endl;
                }
            }while(i > n || j > n);
            escolha_subregiao(mat, tela, i, j, &subregiao, &revelada);
        }while(revelada == 1);
        cout << endl;
        /* Este if abaixo verifica se a sub-regiao contem mina e revela na tela para o jogador. */
        if(subregiao == 1)
            revela_subregiao(mat, tela, i, j, n);
        nao_revelado = 0;
        /* Este for abaixo verifica quantas regioes ainda nao foram reveladas. */
        for (x = 1; x <= n; x ++)
            for (y = 1; y <= n; y ++)
                if (tela[x][y] == '-')
                    nao_revelado ++;
        revelou = 0;
        falta_revelar = 0;
        falta_revelar = nao_revelado - nbombas;
        revelou = sem_bomba - falta_revelar;
        if(mat[i][j] == 'b')
        {
            ganhou = -1;
            cout << "Voce revelou a sub-regiao (" << i << ", " << j << ") com mina." << endl;
        }
        cout << endl;
        if(mat[i][j] != 'b')
        {
            cout << "Voce revelou a sub-regiao (" << i << ", " << j << ") sem mina." << endl;
            cout << "Ate agora voce revelou " << revelou << " sub-regioes." << endl;
            cout << "Ainda faltam revelar " << nao_revelado - nbombas << " subregioes sem mina." << endl;
        }
        cout << endl;
        /* Abaixo imprime na tela o cabecalho com as colunas e a regiao visivel para o jogador com as subregioes reveladas. */
        cabecalho(n);
        cout << endl;
        for (s = 0; s <= n; s ++)
            cout << "---";
        cout << endl;
        for(i = 1; i <= n; i ++)
        {
            for(j = 1; j <= n + 4; j ++)
            {
                if (j >= n + 1)
                    cout << tela[i][j];
                 else
                    cout << tela[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
        bombas_escondidas = 0;
        /* Abaixo verifica se a quantidade de bombas e igual a quantidade escondida. */
        for(i = 1; i <= n; i ++)
            for(j = 1; j <= n; j ++)
                if(tela[i][j] == '-')
                    bombas_escondidas ++;
        if(bombas_escondidas == nbombas)
        {
            ganhou = 1;
        }
    }while(ganhou == 0);
    cout << endl;
    cout << "FIM DO JOGO" << endl << endl;
    if(ganhou == 1)
    {
        cout << "Voce revelou todas as sub-regioes sem minas e GANHOU!" << endl;
        cout << "Abaixo a regiao do jogocom todas as sub-regioes reveladas." << endl << endl;
    }
    else
    {
        cout << "Voce revelou uma sub-regiao com mina e PERDEU!" << endl;
        cout << "Abaixo a regiao do jogo com todas as sub-regios reveladas." << endl << endl;
    }
    cabecalho(n);
    cout << endl;
    for (s = 0; s <= n; s ++)
        cout << "---";
    cout << endl;
    /* Abaixo imprime para o jogador a tela original do jogo onde se encontrava todas as bombas. */
    for(i = 1; i <= n; i ++)
        for(j = 1; j <= n; j ++)
            tela[i][j] = mat[i][j];
    for(i = 1; i <= n; i ++)
    {
        for(j = 1; j <= n + 4; j ++)
        {
            if (j >= n + 1)
                cout << tela[i][j];
            else
                cout << tela[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}
