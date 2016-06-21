#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    float fat, soma = 1.0;
    cout << "Digite um numero: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fat = 1;
        for (j = 1; j <= i; j++)
        {
            fat *= j;
        }
        soma += 1.0 / fat;
    }
    cout << soma << endl;
    return 0;
}
