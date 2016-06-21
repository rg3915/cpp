#include <iostream>
#define MAX 37
using namespace std;
int main()
{
    int n, i, numero, histograma[MAX];
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 0; i < MAX; i++)
        histograma[i] = 0;
    for (i = 0; i < n; i++)
    {
        cin >> numero;
        histograma[numero] ++;
    }
    for (i = 0; i < MAX; i++)
        cout << "Frequencia de " << i << " = " << histograma[i] << endl;
    return 0;
}
