/*Regis S. Santos*/
/*E3.cpp*/
#include <iostream>
using namespace std;
int main()
{
    int binario, potencia = 1, resto = 0, decimal = 0;
    cout << "Digite um numero binario: ";
    cin >> binario;
    while (binario > 0)
    {
        resto = binario % 10;
        binario /= 10;
        decimal = decimal + (resto * potencia);
        potencia *= 2;
    }
    cout << decimal << endl;
    return 0;
}
