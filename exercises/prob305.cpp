#include <iostream>
#define MAX 1000
using namespace std;

float calcula_poli(int k, float coef[MAX], float x)
{
    float pot = 1, soma = 0;
    int i;
    for (i = 0; i <= k; i++)
    {
        soma += coef[i] * pot;
        pot *= x;
    }
    return soma;
}

void derivada(int *k, float coef[MAX])
{
    int i;
    for (i = 0; i < *k; i++)
        coef[i] = (i + 1) * coef[i + 1];
    (*k)--;
}

int main()
{
    int k, i;
    float coef[MAX], x0, x1, x2;
    cout << "Digite o grau do polinomio: ";
    cin >> k;
    cout << "Digite os coeficientes: ";
    for (i = 0; i <= k; i++)
        cin >> coef[i];
    cout << "Digite os valores de x: ";
    cin >> x0 >> x1 >> x2;
    cout << calcula_poli(k,coef,x0) << endl;
    derivada(&k,coef);
    cout << calcula_poli(k,coef,x1) << endl;
    derivada(&k,coef);
    cout << calcula_poli(k,coef,x2) << endl;
    return 0;
}
