#include <iostream>
using namespace std;
int main()
{
    int n, i, anterior, atual, temp;
    anterior = atual = 1;
    cout << "Digite o n-esimo termo da sequencia de Fibonacci: ";
    cin >> n;
    for (i = 3; i <= n+1; i++)
    {
        temp = atual;
        atual += anterior;
        anterior = temp;
    }
    cout << atual << endl;
    return 0;
}
