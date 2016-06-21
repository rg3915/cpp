#include <iostream>
using namespace std;
int main()
{
    int n, i, primo;
    primo = 0;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            primo = primo + 1;
        }
    }
    if (primo == 2)
    {
        cout << n << " 'e primo." << endl;
    }
    else
    {
        cout << n << " não 'e primo." << endl;
    }
    cout << endl;
    return 0;
}
