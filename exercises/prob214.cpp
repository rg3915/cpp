#include <iostream>
#define TRUE 1
#define FALSE 0
using namespace std;

int divide (int *m, int *n, int d)
{
    int ok = 0;
    if (*m % d == 0)
    {
        ok = 1;
        *m /= d;
    }
    if (*n % d == 0)
    {
        ok = 1;
        *n /= d;
    }
    return ok;
}

int main ()
{
    int m, n, d, mmc;
    cout << "Digite dois numeros: " << endl;
    cin >> m >> n;
    d = 2;
    mmc = 1;
    while (m != 1 || n != 1)
    {
        if (divide (&m, &n, d))
            mmc *= d;
        else
            d++;
    }
    cout << mmc << endl;
    return 0;
}
