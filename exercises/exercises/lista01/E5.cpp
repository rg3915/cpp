/*Regis S. Santos*/
/*E5.cpp*/
#include <iostream>
using namespace std;
int main ()
{
    int n, i, numero, soma = 0;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        while (numero != 0)
        {
            cin >> numero;
            if (numero % 2 == 0)
            {
                soma += numero;
            }
        }
        cout << "Soma = " << soma << endl;
        numero = 1;
        soma = 0;
    }
    return 0;
}
