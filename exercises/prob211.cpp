#include <iostream>
using namespace std;

int contadigitos (int n, int d)
{
    int quant = 0;
    while (n > 0)
    {
        if (n % 10 == d)
            quant ++;
        n /= 10;
    }
    return quant;
}

int main ()
{
    int a, b, i, perm = 1;
    cout << "Entre com a e b: ";
    cin >> a >> b;
    for (i = 1; i <= 9; i++)
    {
        if (contadigitos(a,i) != contadigitos(b,i))
            perm = 0;
    }
    if (perm)
        cout << "'E permuta." << endl;
    else
        cout << "Nao 'e permuta." << endl;
    return 0;
}
