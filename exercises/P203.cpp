#include <iostream>
#define NUMERO_MAGICO 10
using namespace std;

int chuta(int chute)
{
    if (chute == NUMERO_MAGICO)
        return 0;
    else if (chute < NUMERO_MAGICO)
        return -1;
    else
        return 1;
}

int encontra(int max)
{
    int i;
    for (i = 1; i <= max; i++)
    {
        if (chuta(i) == 0)
            return i;
    }
    return -1;
}

int main()
{
    int n, res;
    cout << "Digite um numero: ";
    cin >> n;
    res = encontra(n);
    if (res == -1)
        cout << "Nao encontrei." << endl;
    else
        cout << res << endl;
    return 0;
}
