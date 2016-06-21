#include <iostream>
using namespace std;
int main()
{
    int n, numero, cont, soma;
    cont = 0;
    soma = 0;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    while (cont < n)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        /*
            Neste caso, o while funciona como um
            if desfarcado.
        */
        while (numero > 0)
        {
            soma = soma + numero;
            /* Necessario, senao o while nao sera
            testado de novo.*/
            numero = 0;
        }
        cont = cont + 1;
    }
    cout << "A soma dos inteiros positivos eh: " << soma << endl;
    return 0;
}
