#include <iostream>
using namespace std;
int main()
{
    /* d = denominador */
    int i, d;
    float soma = 0.0;
    for (i = 10000; i > 0; i--)
    {
        /* verifica se i 'e par. */
        if (i % 2 == 0)
            d = -i;
        else
            d = i;
        soma += 1.0 / d;
    }
    cout << soma << endl;
    return 0;
}
