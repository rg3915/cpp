#include <iostream>
using namespace std;
int main()
{
    int n, i, aa = 0, a = 1, F;
    cout << "Digite o numero de termos da sequencia de Fibonacci: ";
    cin >> n;
    cout << aa << " " << a << " ";
    for (i = 0; i < n - 2; i++)
    {
        F = a + aa;
        cout << F << " ";
        aa = a;
        a = F;
    }
    cout << endl;
    return 0;
}
