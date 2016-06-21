#include <iostream>
#define TRUE 1
#define FALSE 0
using namespace std;
int main()
{
    int n, i, divisor, primo, soma = 0;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 2; i <= n; i++)
    {
        primo = TRUE;
        for (divisor = 2; divisor < i; divisor ++)
        {
            if (i % divisor == 0)
                primo = FALSE;
        }
        if (primo == TRUE)
            soma += i;
    }
    cout << soma << endl;
    return 0;
}
