#include <iostream>
using namespace std;
int main()
{
    int ma = 0, mi = 0;
    char a;
    cin >> noskipws >> a;
    while (a != '.')
    {
        if (a >= 'a' && a <= 'z')
            mi ++;
        if (a >= 'A' && a <= 'Z')
            ma ++;
        cin >> noskipws >> a;
    }
    cout << "A frase tem "<< ma << " letras maiusculas." << endl;
    cout << "e "<< mi << " letras minusculas." << endl;
    return 0;
}
