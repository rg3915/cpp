#include <iostream>
#define MAX 1000
using namespace std;
int main()
{
    int n, i, v[MAX];
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
