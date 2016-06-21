#include <iostream>
using namespace std;
int main()
{
    int x, y, z, n, a, b, i, potx, poty, potz;
    cout << "Digite quatro numeros: ";
    cin >> x >> y >> a >> b;
    for (n = 3; n <= b; n++)
    {
        for (z = 1; z <= a; z++)
        {
            potx = poty = potz = 1;
            for (i = 1; i <= n; i++)
            {
                potx *= x;
                poty *= y;
                potz *= z;
            }
            cout << potx + poty - potz << endl;
        }
    }
    return 0;
}
