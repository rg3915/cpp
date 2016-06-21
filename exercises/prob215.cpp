#include <iostream>
using namespace std;

void converte (char ch, int *tipo, char *valor)
{
    *valor = ch;
    if (ch >= '0' && ch <= '9')
        *tipo = 0;
    else if (ch >= 'a' && ch <= 'z')
    {
        *tipo = 1;
        *valor = ch - 'a' + 'A';
    }
    else if (ch >= 'A' && ch <= 'Z')
        *tipo = 1;
    else
        *tipo = 2;
}

int main ()
{
    char c, valor;
    int tipo;
    do
    {
        cin >> noskipws >> c;
        converte (c, &tipo, &valor);
        if (tipo != 2)
            cout << valor;
    } while (c != '.');
    return 0;
}
