#include <iostream>
using namespace std;
int main()
{
    int maior = 0, atual = 0;
    char c;
    cin >> noskipws >> c;
    while (c != '.')
    {
        atual ++;
        if (c == ' ')
            atual = 0;
        if (atual > maior)
            maior = atual;
        cin >> noskipws >> c;
    }
    cout << maior << endl;
    return 0;
}
