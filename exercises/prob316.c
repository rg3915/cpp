#include <stdio.h>
#define MAX 100

int min(float X[MAX], int n, int k)
{
    int min, imin, i;
    min = X[k]; /* ou tire essa linha */
    imin = k;
    for (i = k + 1; i < n; i++)
        if (min > X[i]) /* ou (X[imin] > X[i]) */
        {
            min = X[i]; /* tire essa linha */
            imin = i;
        }
    return imin;
}

void ordena(float X[MAX], int n)
{
    int i, menor, aux;
    for (i = 0; i < n; i++)
    {
        menor = min(X,n,i);
        aux = X[menor];
        X[menor] = X[i];
        X[i] = aux;
    }
}

int main()
{
    int n, i;
    float X[MAX];
    printf("Digite o tamanho da sequencia: ");
    scanf("%d",&n);
    printf("Digite os valores: ");
    for (i = 0; i < n; i++)
        scanf("%f",&X[i]);
    ordena(X,n);
    for (i = 0; i < n; i++)
        printf("%f ",X[i]);
    printf("\n");
    return 0;
}
