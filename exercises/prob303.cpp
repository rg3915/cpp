#include <iostream>
#define MAX 1000
using namespace std;
int main()
{
    int m, n, i, j, vetorm[MAX], vetorn[MAX];
    cout << "Digite dois numeros: ";
    cin >> m >> n;
    for (i = 0; i < m; i++)
        cin >> vetorm[i];
    for (i = 0; i < n; i++)
        cin >> vetorn[i];
    i = j = 0;
    while (m > i && n > j)
    {
        if (vetorm[i] < vetorn[j])
        {
            cout << vetorm[i] << " ";
            i++;
        }
        else if (vetorm[i] == vetorn[j])
        {
            cout << vetorm[i] << " ";
            i++;
            j++;
        }
        else
        {
            cout << vetorn[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << vetorm[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << vetorn[j] << " ";
        j++;
    }
    cout << endl;
    return 0;
}
