#include <iostream>
using namespace std;
int main()
{
    int n, i, nota, rec;
    cout << "Digite o numero de alunos: ";
    cin >> n;
    rec = 0;
    for (i = 0; i < n; i = i + 1)
    {
        cout << "Digite as notas: ";
        cin >> nota;
        if (nota >= 30)
        {
            if (nota <= 50)
            {
                rec = rec + 1;
            }
        }
    }
    cout << rec << " alunos estao de recuperacao." << endl;
    return 0;
}
