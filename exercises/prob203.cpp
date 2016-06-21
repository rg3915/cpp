#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float x, y;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x >= 0 && y >= 0 && x*x + y*y <= 1)
            cout << "Pertence a H." << endl;
        else
            cout << "Nao pertence a H." << endl;
    }
    return 0;
}
