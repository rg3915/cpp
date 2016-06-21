#include <iostream>
using namespace std;
int main()
{
    int n, k, resultado, potencia;
    cout << "Digite um numero:";
    cin >> n;
    cout << "Digite outro numero:";
    cin >> k;
    resultado = 1;
    potencia = 0;
    while (potencia < k)
    {
        resultado = resultado*n;
        potencia = potencia + 1;
    }
    cout << resultado << endl;
    return 0;
}
