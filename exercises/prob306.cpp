#include <iostream>
#define MAX 100
#define TRUE 1
#define FALSE 0
using namespace std;

int main()
{
    float A[MAX][MAX];
    int n, i, j, simetrica = TRUE;
    cout << "Digite a ordem da matriz quadrada: ";
    cin >> n;
    cout << "Digite as entradas da matriz: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
                simetrica = FALSE;
        }
    }
    if (simetrica)
        cout << "Simetrica." << endl;
    else
        cout << "Nao simetrica." << endl;
    return 0;
}
