/*
    Curso :    Introducao a Programacao - Verao 2012
    Turma :    1 - Diurno
    Nome  :    Edson Morais da Cruz
    Data  :    05/01/2012

    Programa :  EP1   -   Criptografia com o metodo One-Time Pad
*/

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char a, b, c;
    ofstream desencriptado;
    ifstream key;
    ifstream encriptado;
    encriptado.open("entrada.enc", ios::binary);
        key.open("chave", ios::binary);
            desencriptado.open("entrada.dec", ios::binary);
                while(encriptado >> noskipws >> c)
                {
                    key >> noskipws >> b;
                    a = c ^ b;
                    desencriptado << a;
                }
            desencriptado.close();
        key.close();
    encriptado.close();
    cout << "Arquivo desencriptado com sucesso." << endl;
    return 0;
}
