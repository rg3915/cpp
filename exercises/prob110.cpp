#include <iostream>
using namespace std;
int main()
{
    int n, i, j, atual, multiplos;
    atual = multiplos = 0;
    cout << "Digite o valor de n: ";
    cin >> n;
    cout << "Digite o valor de i: ";
    cin >> i;
    cout << "Digite o valor de j: ";
    cin >> j;
    while (multiplos < n)
    {
        if (atual % i == 0 || atual % j == 0)
        {
            multiplos = multiplos + 1;
            cout << atual << " ";
        }
        atual = atual + 1;
    }
    cout << endl;
    return 0;
}
