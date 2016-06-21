#include <iostream>
using namespace std;
int main()
{
    int n, i, j, numero, fat;
    cout << "Digite o comprimento da sequencia: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> numero;
        fat = 1;
        for (j = 2; j <= numero; j++)
            fat *= j;
        cout << numero << " != " << fat << endl;
    }
    return 0;
}
