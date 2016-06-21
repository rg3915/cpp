#include <iostream>
#define MAX 100
using namespace std;

//selection sort
int max(float v[MAX], int n)
{
    int i, m = v[0], imaior = 0;
    for (i = 1; i < n; i++)
    {
        if (m < v[i])
        {
            m = v[i];
            imaior = i;
        }
    }
    return imaior;
}

void selecao(float v[MAX], int n)
{
    int maior, aux;
    while (n > 1)
    {
        maior = max(v,n);
        aux = v[n-1];
        v[n-1] = v[maior];
        v[maior] = aux;
        n--;
    }
}

//insertion sort
void insercao(float v[MAX], int n)
{
    int i, j, aux;
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && v[j] < v[j-1])
        {
            aux = v[j-1];
            v[j-1] = v[j];
            v[j] = aux;
            j--;
        }
    }
}

//bubble sort
void bolha(float v[MAX], int n)
{
    int i, aux, trocou = TRUE;
    while (trocou)
    {
        trocou = FALSE;
        for (i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
                trocou = TRUE;
            }
        }
    }
}

//buble sort2
void bolha2(float v[MAX], int n)
{
    int i, aux, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i+1];
                v[i+1] = v[i];
                v[i] = aux;
            }
        }
    }
}

int main()
{
    int
    return 0;
}
