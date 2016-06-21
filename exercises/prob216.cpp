#include <iostream>
using namespace std;

void decompoe (float x, int *xint, float *xfrac)
{
    *xint = (int) x;
    *xfrac = x - *xint;
}

int main ()
{
    float b, x;
    int a;
    cout << "Digite um numero: " << endl;
    cin >> x;
    decompoe(x, &a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
