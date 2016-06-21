#include <iostream>
using namespace std;
int main()
{
    int n, i, perfeito = 0;
    cout << "Digite um numero: " << endl;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            perfeito += i;
    }
    if (perfeito == n)
        cout << "'E perfeito." << endl;
    else
        cout << "Nao 'e perfeito." << endl;
    return 0;
}
