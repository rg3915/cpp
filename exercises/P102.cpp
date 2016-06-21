#include <iostream>
using namespace std;
int main()
{
    int n, anterior, atual, i, temp;
    anterior = atual = 1;
    cout << "Digite o numero de termos da sequencia de Fibonacci: ";
    cin >> n;
    cout << anterior << " ";
    if (n > 1)
        cout << atual << " ";
    for (i = 2; i < n; i++)
    {
        temp = atual;
        atual += anterior;
        anterior = temp;
        cout << atual << " ";
    }
    cout << endl;
    return 0;
}
