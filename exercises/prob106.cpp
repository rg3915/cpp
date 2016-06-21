#include <iostream>
using namespace std;
int main()
{
    int n, i, numero, par, impar;
    i = 0;
    par = 0;
    impar = 0;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    while (i < n)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        if (numero % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        i = i + 1;
    }
    cout << "A sequencia possui " << par << " inteiros pares e " << impar << " inteiros impares." << endl;
    return 0;
}
