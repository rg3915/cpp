/*Regis S. Santos*/
/*E2.cpp*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, nota, maior, menor, media;
    cout << "Digite o numero de alunos: ";
    cin >> n;
    cout << "Digite as notas: ";
    cin >> nota;
    maior = nota;
    menor = nota;
    media = nota;
    for (i = 1; i < n; i++)
    {
        cin >> nota;
        if (nota > maior)
            maior = nota;
        if (nota < menor)
            menor = nota;
        media += nota;
    }
    media = media / n;
    cout << "A maior nota 'e " << maior << endl;
    cout << "A menor nota 'e " << menor << endl;
    cout << "A media 'e " << media << endl;
    return 0;
}
