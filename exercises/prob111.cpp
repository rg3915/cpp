#include <iostream>
using namespace std;
int main()
{
    int n, i, primo = 1;
    cout << "Digite um numero: ";
    cin >> n;
    if (n == 1)
    {
        primo = 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            primo = 0;
        }
    }
    if (primo == 1)
    {
        cout << n << " 'e primo." << endl;
    }
    else
    {
        cout << n << " não 'e primo." << endl;
    }
    return 0;
}
