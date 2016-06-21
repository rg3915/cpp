/*
    Curso :    Introducao a Programacao - Verao 2012
    Turma :    1 - Diurno
    Nome  :    Edson Morais da Cruz
    Data  :    05/01/2012

    Programa :  EP1   -   Criptografia com o metodo One-Time Pad
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main ()
{
    srand(time(0));
    char a, b, c;
    ifstream arquivo;
    ofstream key;
    ofstream encriptado;
    arquivo.open("entrada", ios::binary);
        key.open("chave", ios::binary);
            encriptado.open("entrada.enc", ios::binary);
                while(arquivo >> noskipws >> a)
                {
                    b = (char)(128 * ((float)rand() / (RAND_MAX + 1.0)));
                    key << b;
                    c = a ^ b;
                    encriptado << c;
                }
            encriptado.close();
        key.close();
    arquivo.close();
    cout << "Arquivo encriptado com sucesso." << endl;
    return 0;
}
