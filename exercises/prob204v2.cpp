#include <iostream>
using namespace std;
int main()
{
    float x, epsilon, atual, anterior, diferenca;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite um epsilon: ";
    cin >> epsilon;
    atual = x;
    do
    {
        anterior = atual;
        atual = 0.5 * (anterior + x / anterior);
        diferenca = atual - anterior;
        if(diferenca < 0)
            diferenca = -diferenca; /*pega o módulo de diferenca*/
    }while(diferenca >= epsilon);
    cout << atual << endl;
    return 0;
}
