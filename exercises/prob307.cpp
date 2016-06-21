#include <iostream>
#define MAX 100
using namespace std;
int main()
{
    int A[MAX][MAX], n, linha, coluna;
    cout << "Digite um numero: ";
    cin >> n;
    A[0][0] = A[0][1]=1;
    for (linha = 1; linha < n; linha ++)
    {
        for (coluna = 0; coluna <= linha + 1; coluna ++)
        {
            if (coluna == 0)
                A[linha][coluna] = A[linha - 1][coluna];
            else if (coluna == linha + 1)
                A[linha][coluna] = A[linha - 1][coluna - 1];
            else
                A[linha][coluna] = A[linha - 1][coluna] + A[linha - 1][coluna - 1];
        }
    }
    for (linha = 0; linha < n; linha ++)
    {
        for (coluna = 0; coluna <= linha + 1; coluna ++)
            cout << A[linha][coluna] << " ";
        cout << endl;
    }
    return 0;
}
