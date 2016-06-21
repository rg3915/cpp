#include <iostream>
using namespace std;

void somabit(int b1, int b2, int *vaium, int *soma)
{
    int temp = b1 + b2 + *vaium;
    *vaium = temp / 2;
    *soma = temp % 2;
}

int main()
{
    int m, n, vaium = 0, soma, pot = 1, total = 0;
    cout << "Digite dois numeros: ";
    cin >> n >> m;
    while (n > 0 || m > 0)
    {
        somabit (n % 10, m % 10, &vaium, &soma);
        total += pot * soma;
        pot *= 10;
        n /= 10;
        m /= 10;
    }
    total += pot * vaium;
    cout << total << endl;
    return 0;
}
