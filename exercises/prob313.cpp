#include <iostream>
#define TRUE 1
#define FALSE 0
#define MAX 100
using namespace std;

//bubble sort
void bolha_matriz(int n, int m, int A[MAX][MAX], int c, int k, int p)
{
    int i, j, aux, trocou = TRUE;
    while (trocou)
    {
        trocou = FALSE;
        for (i = k; i < p; i++)
        {
            if (A[i][c] > A[i+1][c])
            {
                for (j = 0; j < m; j++)
                {
                    aux = A[i+1][j];
                    A[i+1][j] = A[i][j];
                    A[i][j] = aux;
                }
                trocou = TRUE;
            }
        }
    }
}

int main ()
{
    int DATA[MAX][MAX], n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> DATA[i][0] >> DATA[i][1] >> DATA[i][2];
    bolha_matriz(n,3,DATA,0,0,n-1);
    bolha_matriz(n,3,DATA,1,0,n-1);
    bolha_matriz(n,3,DATA,2,0,n-1);
    cout << endl;
    for (i = 0; i < n; i++)
        cout << DATA[i][0] << " " << DATA[i][1] << " " << DATA[i][2] << endl;
    return 0;
}
