#include <iostream>
using namespace std;
int main()
{
    int n, i, numero, anterior, crescente;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    crescente = 1;
    cout << "Digite o primeiro numero: ";
    cin >> anterior;
    for (i = 1; i < n; i = i + 1)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        if (anterior >= numero)
        {
            crescente = 0;
        }
        anterior = numero;
    }
    if (crescente == 1)
    {
        cout << "A sequencia 'e crescente." << endl;
    }
    else
    {
        cout << "A sequencia nao 'e crescente." << endl;
    }
    return 0;
}
