#include <iostream>
#define MAX 100
using namespace std;

int acha(float v[MAX], int n, float x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i] == x)
            return i;
    }
    return -1;
}

void insere(float v[MAX], int *n, float x)
{
    v[*n] = x;
    (*n)++;
}

int main()
{
    int n, i, t = 0;
    float atual, seq[MAX];
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> atual;
        if (acha(seq,t,atual) == -1)
            insere(seq,&t,atual);
    }
    for (i = 0; i < t; i++)
        cout << seq[i] << " ";
    cout << endl;
    return 0;
}
