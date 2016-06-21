#include <iostream>
using namespace std;
int main()
{
    int maior = 0, atual = 0;
    char c;
    cin >> noskipws >> c;
    while (c != '.')
    {
        atual = 0;
        while (c != ' ' && c != '.')
        {
            atual ++;
            cin >> noskipws >> c;
        }
        if (atual > maior)
            maior = atual;
        if (c != '.')
            cin >> noskipws >> c;
    }
    cout << maior << endl;
    return 0;
}
