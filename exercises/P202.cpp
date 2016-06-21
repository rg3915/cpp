#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    char c, d;
    cout << "Digite duas letras: ";
    cin >> n >> c;
    while (c != '.')
    {
        d = c + n;
        if (d > 'z')
            d = 'Z' - 'A' + 1;
        cout << d;
        if (k != 25)
            c = 'a' + k;
        else
            c = '.';
        k++;
    }
    cout << "." << endl;
    return 0;
}
