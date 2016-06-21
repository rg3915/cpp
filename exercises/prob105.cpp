#include <iostream>;
using namespace std;
int main()
{
    int n, i, numero, pos, neg;
    i = 0;
    pos = 0;
    neg = 0;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    while (i < n)
    {
        cout << "Digite o proximo numero: ";
        cin >> numero;
        if (numero > 0)
        {
            pos = pos + numero;
        }
        else
        {
            neg = neg + numero;
        }
        i = i + 1;
    }
    cout << "A soma dos inteiros positivos eh: " << pos << endl;
    cout << "A soma dos inteiros negativos eh: " << neg << endl;
    return 0;
}
