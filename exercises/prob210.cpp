#include <iostream>
using namespace std;

int fatorial (int n)
{
    int mult = 1, i;
    for (i = 1; i <= n; i++)
        mult *= i;
    return mult;
}

int combinacao (int m, int n)
{
    return fatorial(m) / (fatorial(n) * fatorial(m - n));
}

int main()
{
    float n, i;
    cin >> n;
    for (i = 0; i <= n; i++)
        cout << combinacao(n,i) << " ";
    cout << endl;
    return 0;
}
