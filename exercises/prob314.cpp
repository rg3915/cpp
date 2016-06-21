#include <iostream>
#define MAX 8
using namespace std;

void inicializa_tabuleiro(char tab[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
            tab[i][j] = '-';
    }
}

void imprima_tabuleiro(char tab[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
            cout << tab[i][j];
        cout << endl;
    }
}

int atacada(char tab[MAX][MAX], int linha, int coluna, int *linha_r, int *coluna_r)
{
    int i, j, d1, d2;
    d1 = linha - coluna;
    d2 = linha + coluna;
    for (i = 0; i < MAX; i++)
    {
        if (tab[linha][i] == 'R')
        {
            *linha_r = linha;
            *coluna_r = i;
            return 1;
        }
        if (tab[i][coluna] == 'R')
        {
            *linha_r = i;
            *coluna_r = coluna;
            return 1;
        }
        j = i - d1;
        if (j >= 0 && j < MAX && tab[i][j] == 'R')
        {
            *linha_r = i;
            *coluna_r = j;
            return 1;
        }
        j = d2 - i;
        if (j >= 0 && j < MAX && tab[i][j] == 'R')
        {
            *linha_r = i;
            *coluna_r = j;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n, i, k, l, c, rl, rc;
    char tab[MAX][MAX];
    inicializa_tabuleiro(tab);
    cout << "Digite o numero de rainhas: ";
    cin >> k;
    for (i = 0; i < k; i++)
    {
        cout << "Digite a posicao da rainha: ";
        cin >> l >> c;
        tab[l][c] = 'R';
    }
    imprima_tabuleiro(tab);
    cout << "Digite o numero de posicoes que podem ser atacadas: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Digite essas posicoes: ";
        cin >> l >> c;
        if (atacada(tab,l,c,&rl,&rc))
            cout << "Atacada por (" << rl << "," << rc << ")." << endl;
        else
            cout << "Nao atacada." << endl;
    }
    return 0;
}
