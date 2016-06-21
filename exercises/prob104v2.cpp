#include <iostream>
using namespace std;
int main()
{
    int n, numero, contador, soma;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    contador = 0;
    soma = 0;
    while (contador < n)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        if (numero > 0)
        {
            soma = soma + numero;
        }
        contador = contador + 1;
    }
    cout << "A soma dos inteiros positivos eh: " << soma << endl;
    return 0;
}
