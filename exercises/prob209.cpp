#include <iostream>
using namespace std;

float potencia (float base, int expoente)
{
    int i;
    float mult = 1;
    for (i = 0; i < expoente; i++)
        mult *= base;
    return mult;
}

/* Se a funcao estiver depois do int main */
/* podemos chama-la com o comando a seguir: */
/* float potencia (...); */
int main()
{
    float x, y;
    int a, b;
    cin >> x >> y >> a >> b;
    cout << potencia(x,a) + potencia(y,b) + potencia(x-y,a+b) << endl;
    return 0;
}
