#include <iostream>
using namespace std;
int main()
{
    int n, i, numero, maior;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    maior = 0;
    for (i = 0; i < n; i = i + 1)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        if (numero > maior)
            maior = numero;
    }
    cout << "O maior numero eh: " << maior << endl;
    return 0;
}
