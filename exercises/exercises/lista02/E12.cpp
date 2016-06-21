#include <iostream>
using namespace std;
int main()
{
    int n, i, k;
    float sn = 0.0;
    cout << "Digite um numero: ";
    cin >> n;
    k = n;
    for (i = 1; i <= n; i++)
    {
        sn = sn + (float)i / k;
        k--;
    }
    cout << sn << endl;
    return 0;
}
