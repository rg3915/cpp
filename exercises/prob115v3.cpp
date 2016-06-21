#include <iostream>
using namespace std;
int main()
{
    int m, n, i, candidato, termo;
    cout << "Digite um numero: ";
    cin >> m;
    for (n = 1; n <= m; n++)
    {
        candidato = n*n - n + 1;
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
