#include <iostream>
#define TRUE 1
#define FALSE 0
using namespace std;

void encurta (int *n, int *primeiro, int *ultimo)
{
    int copia = *n, pot = 1;
    *ultimo = copia % 10;
    while (copia >= 10)
    {
        copia /= 10;
        pot *= 10;
    }
    *primeiro = copia;
    *n %= pot; /* ou *n = *n - *primeiro * pot; */
    *n /= 10;
}

int main ()
{
    int n, primeiro, ultimo, palindrome = TRUE;
    cout << "Digite um numero: " << endl;
    cin >> n;
    while (n > 0)
    {
        encurta (&n, &primeiro, &ultimo);
        if (primeiro != ultimo)
            palindrome = FALSE;
    }
    if (palindrome)
        cout << "'E palindrome." << endl;
    else
        cout << "Nao 'e palindrome." << endl;
    return 0;
}
