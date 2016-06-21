#include <iostream>
using namespace std;
int main()
{
    int n, i, t, multiplicidade;
    cout << "Digite um numero: ";
    cin >> n;
    t = n;
    for (i = 2; i <= n; i++)
    {
        multiplicidade = 0;
        while (t % i ==0)
        {
            t /= i;
            multiplicidade ++;
        }
        if (multiplicidade > 0)
            cout << "Fator " << i << " multiplicidade " << multiplicidade << endl;
    }
    return 0;
}
