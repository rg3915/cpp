#include <iostream>
using namespace std;
int main()
{
    int n, tamanho = 1;
    cout << "Digite um numero: ";
    cin >> n;
    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        tamanho ++;
    }
    cout << tamanho << endl;
    return 0;
}
