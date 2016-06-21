#include <iostream>
#define MAX 100
using namespace std;
int main()
{
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p, i, j, k;
    cout << "Digite tres numeros: ";
    cin >> m >> n >> p;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            cin >> B[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
