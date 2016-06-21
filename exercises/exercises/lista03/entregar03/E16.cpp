/* Regis da Silva Santos*/
/* Monitor: Este exercicio foi passado em sala de aula
   com pequenas variacoes. */
#include <iostream>
using namespace std;
int main()
{
    int n, i, pertence = 0;
    float x, y;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        if ((x <= 0 && y <= 0 && y + x*x + 2*x - 3 <= 0) ||
            (x >= 0 && y + x*x - 2*x - 3 <= 0))
        {
            cout << "Pertence a H." << endl;
            pertence ++;
        }
        else
            cout << "Nao pertence a H." << endl;
    }
    cout << pertence << " pontos pertencem a H." <<endl;
    return 0;
}
