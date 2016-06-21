/*Regis S. Santos*/
/*E4.cpp*/
#include <iostream>
using namespace std;
int main()
{
    int n, binario = 0, digito, potencia = 1;
    cout << "Digite um numero: ";
    cin >> n;
    while (n > 0)
    {
        digito = n % 2;
        n = n / 2;
        binario = binario + digito * potencia;
        potencia = potencia * 10;
    }
    cout << binario << endl;
    return 0;
}
