#include <iostream>
using namespace std;
int main()
{
    int m, n, i, candidato, soma, termo;
    cout << "Digite um numero: ";
    cin >> m;
    for (n = 1; n <= m; n++)
    {
        candidato = 1;
        do
        {
            soma = 0;
            termo = candidato;
            for (i = 0; i < n; i++)
            {
                soma += termo;
                termo += 2;
            }
            if (soma != n*n*n)
                candidato += 2;
        } while (soma != n*n*n);
        cout << n << "^3 = ";
        termo = candidato;
        for (i = 0; i < n - 1; i++)
        {
            cout << termo << " + ";
            termo += 2;
        }
        cout << termo << endl;
    }
    return 0;
}
