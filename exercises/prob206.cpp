#include <iostream>
using namespace std;
int main()
{
    int vogais = 0, tamanho = 0;
    char c;
    cin >> noskipws >> c;
    while (c != '.')
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vogais ++;
        tamanho ++;
        cin >> noskipws >> c;
    }
    cout << (float) vogais / tamanho << endl;
    return 0;
}
