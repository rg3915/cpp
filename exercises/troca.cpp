#include <iostream>
using namespace std;

void troca1 (int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void troca2 (int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int a = 2, b = 3;
    troca1(a,b);
    cout << a << " " << b << endl;
    troca2(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}
