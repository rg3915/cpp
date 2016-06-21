#include <iostream>
#define MAX 100
using namespace std;

int conta(int A[MAX][MAX], int n, int m, int i, int j)
{
    int soma = 0, l, k;
    for (l = i - 1; l <= i + 1;l++)
    {
        for (k = j - 1; k <= j + 1; k++)
            //if (!(l == i && k == j) && A[l][k] == -1)
            if (!(l == i && k == j) && l >= 0 && k >= 0 && l < n && k < m && A[l][k] == -1)
                soma ++;
    }
    return soma;
}

int main()
{
    int m, n, i, j, A[MAX][MAX];
    cout << "Digite dois numeros: ";
    cin >> n >> m;
/*    // moldura da matriz
    for (i = 0; i <= n + 1; i++)
        A[i][0] = A[i][m+1] = 0;
    for (j = 0; j <= m + 1; j++)
        A[0][j] = A[m+1][j]=0; */
    // lendo a matriz
    //for (i = 1; i <= n; i++)
    for (i = 0; i < n; i++)
        //for (j = 1; j <= m; j++)
        for (j = 0; j < m; j++)
            cin >> A[i][j];
    cout << endl;
    //for (i = 1; i <= n; i++)
    for (i = 0; i < n; i++)
    {
        //for (j = 1; j <= m; j++)
        for (j = 0; j < m; j++)
            if (A[i][j] != -1)
                cout << conta(A,n,m,i,j) << " ";
            else
                cout << -1 << " ";
            cout << endl;
    }
    return 0;
}
