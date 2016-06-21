#include <iostream>
using namespace std;
int main()
{
    int k = 0, sinal = 1;
    float epsilon, pi = 0, termo;
    cout << "Digite um valor para epsilon: ";
    cin >> epsilon;
    do
    {
        termo = (float) sinal / (2 * k + 1);
        sinal *= -1;
        k++;
        pi += termo;
        if (termo < 0)
            termo =- termo;
        cout << pi << endl;
    } while (termo > epsilon);
    pi *= 4;
    cout << pi << endl;
    return 0;
}
