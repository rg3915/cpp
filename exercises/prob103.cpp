#include <iostream>
using namespace std;
int main()
{
    int n, resultado, i;
    cout << "Digite um numero:";
    cin >> n;
    resultado = 1;
    i = n;
    while (i >= 1)
    {
        resultado = resultado*i;
        i = i - 1;
    }
    cout << resultado << endl;
    return 0;
}
