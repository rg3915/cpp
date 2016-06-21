#include <iostream>
using namespace std;
int main ()
{
    int n, i, numero, mdc, candidato;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    cin >> mdc;
    for (i = 1; i < n; i++)
    {
        cin >> numero;
        candidato = mdc;
        while (mdc % candidato != 0 || numero % candidato != 0)
            candidato --;
        mdc = candidato;
    }
    cout << mdc << endl;
    return 0;
}
