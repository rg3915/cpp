#include <iostream>
using namespace std;
int main()
{
    int i;
    float somaPos = 0.0, somaNeg = 0.0;
    for (i = 1; i <= 10000; i++)
    {
        /* verifica se i 'e par. */
        if (i % 2 == 0)
            somaNeg += 1.0 / -i;
        else
            somaPos += 1.0 / i;
    }
    cout << "soma positivos: " << somaPos << endl;
    cout << "soma negativos: " << somaNeg << endl;
    cout << "soma total: " << somaPos + somaNeg << endl;
    return 0;
}
