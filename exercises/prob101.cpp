#include <iostream>
using namespace std;
int main()
{
    int numero, soma;
    soma = 0;
    cout << "digite um numero:";
    cin >> numero;
    cout << numero << endl;
    while (numero != 0)
    {
        soma = soma + numero;
        cin >> numero;
        cout << numero << endl;
    }
    cout << "soma = " << soma << endl;
    return 0;
}
