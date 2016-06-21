#include <iostream>
using namespace std;
int main()
{
    int n, i, j, pot = 1;
    float soma = 0.0;
    cout << "Digite um numero: ";
    cin >> n;
    /* verifica se n 'e par */
    if (n % 2 == 0)
    {
        /* \sum 1/k^2 */
        for (i = 1; i <= n; i++)
        {
            pot = i * i;
            soma += 1.0 / pot;
        }
    }
    else
    {
        /* \sum 1/2^k */
        for (i = 1; i <= n / 2; i++)
        {
            pot = 1;
            for (j = 1; j <= i; j++)
                pot *= 2;
            soma += 1.0 / pot;
        }
    }
    cout << soma << endl;
    return 0;
}
