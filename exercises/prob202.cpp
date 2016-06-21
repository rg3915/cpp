#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float soma = 0.0;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        soma += 1.0/i;
    }
    cout << soma << endl;
    return 0;
}
