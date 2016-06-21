#include <iostream>
using namespace std;
int main()
{
    int caracter = 0;
    char c;
    while (c != '.')
    {
        cin >> noskipws >> c;
        if (c % 2 == 0 || c % 3 == 0)
            caracter ++;
    }
    cout << caracter << endl;
    return 0;
}
