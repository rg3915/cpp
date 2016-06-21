/* Regis da Silva Santos*/
/* Monitor: Foi passado um exercicio semelhante em sala de aula. */
#include <iostream>
using namespace std;
int main()
{
    int palavras = 1, letras = 0;
    char c;
    cin >> noskipws >> c;
    while (c != '.')
    {
        if (c == ' ')
            palavras ++;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letras ++;
        cin >> noskipws >> c;
    }
    cout << palavras << " palavras." << endl;
    cout << letras << " letras." << endl;
    return 0;
}
