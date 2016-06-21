#include <iostream>
using namespace std;
int main()
{
    int n, resultado;
    cout << "Digite um numero:";
    cin >> n;
    resultado = 1;
    while (n > 0)
    {
        resultado = resultado*n;
        n = n - 1;
    }
    cout << resultado << endl;
    return 0;
}
