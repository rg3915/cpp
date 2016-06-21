#include <iostream>
using namespace std;

void converte (int t, int *dias, int *horas, int *minutos, int *segundos)
{
    *segundos = t % 60;
    t /= 60;
    *minutos = t % 60;
    t /= 60;
    *horas = t % 24;
    t /= 24;
    *dias = t;
}

int main ()
{
    int t, dias, horas, minutos, segundos;
    cout << "Digite um intervalo de tempo em segundos: " << endl;
    cin >> t;
    converte (t, &dias, &horas, &minutos, &segundos);
    cout << dias << " dia(s), " << horas << " hora(s), " << minutos << " minuto(s), " << segundos << " segundo(s)."<< endl;
    return 0;
}
