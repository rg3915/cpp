/*Regis S. Santos*/
/*E6.cpp*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, numero = 0, primo = 0, soma = 0;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    cout << "Digite os " << n << " numeros: ";
    for (i = 0; i < n; i++)
    {
        cin >> numero;
        for (primo = 0, j = 1; j <= numero; j++)
        {
            if (numero %j == 0)
                primo ++;
        }
        if (primo == 2)
        {
            soma = soma + numero;
        }
    }
    cout << "A soma dos primos 'e = " << soma << endl;
    return 0;
}
