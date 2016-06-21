#include <iostream>
#define TRUE 1
#define FALSE 0

using namespace std;
int main()
{
    int n, i, anterior, atual, razao = 0, res = TRUE;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    cin >> anterior;
    if (n > 1)
    {
        cin >> atual;
        razao = atual - anterior;
    }
    for (i = 2; i < n; i++)
    {
        anterior = atual;
        cin >> atual;
        if (atual - anterior != razao)
            res = FALSE;
    }
    if (res) /*ou res = TRUE*/
        cout << "'E uma P.A." << endl;
    else
        cout << "Nao 'e uma P.A." << endl;
    return 0;
}
