#include <iostream>
using namespace std;
int main()
{
    int n, d, resto;
    resto = 0;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "Digite um digito: ";
    cin >> d;
    while (n > 0)
    {
        if (n % 10 == d)
        {
            resto = resto + 1;
        }
        n = n / 10;
    }
    cout << "O numero " << d << " aparece "<< resto << " vezes."<< endl;
    return 0;
}
