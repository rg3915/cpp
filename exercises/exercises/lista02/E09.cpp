#include<iostream>
using namespace std;
int main()
{
    int n, resto, soma = 0, temp;
    cout << "Digite um numero: ";
    cin >> n;
    temp  = n;
    while(n != 0)
    {
         resto = n % 10;
         n = n / 10;
         soma = soma * 10 + resto;
    }
    if(temp == soma)
         cout << "'e palindrome" << endl;
    else
         cout << "nao 'e palindrome" << endl;
    return 0;
}
