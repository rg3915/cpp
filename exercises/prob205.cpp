#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    float x, epsilon, soma = 1.0, termo = 1.0;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite um epsilon: ";
    cin >> epsilon;
    while ((termo > 0 && termo >= epsilon) || (termo < 0 && -termo >= epsilon))
    {
        n++;
        termo *= x / n;
        soma += termo;
    }
    cout << soma << endl;
    return 0;
}
