/*Regis S. Santos*/
/*E1.cpp*/
#include <iostream>
using namespace std;
int main()
{
    int n, quadrado = 0;
    cout << "Digite um numero: ";
    cin >> n;
    quadrado = n * n;
    cout << quadrado << endl;
    while (n != 0)
    {
        cout << "Digite o proximo numero: ";
        cin >> n;
        quadrado = n * n;
        cout << quadrado << endl;
    }
    return 0;
}
