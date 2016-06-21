#include <iostream>
using namespace std;
int main()
{
    float x, epsilon, atual, anterior;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite um epsilon: ";
    cin >> epsilon;
    atual = x;
    do
    {
        anterior = atual;
        atual = 0.5 * (anterior + x / anterior);
    } while (anterior - atual >= epsilon || atual - anterior >= epsilon);
    cout << atual << endl;
    return 0;
}
