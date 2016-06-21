#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "Digite tres numeros: ";
    cin >> n >> j >> m;
    for (i = 0; i <= n; i++)
        if (i % m == j % m)
            cout << i << " ";
    cout << endl;
    return 0;
}
