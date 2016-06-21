#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float nota, soma = 0.0;
    cout << "Digite o numero de notas: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Digite as notas: ";
        cin >> nota;
        soma += nota;
    }
    cout << soma / n << endl;
    return 0;
}
