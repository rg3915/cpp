#include <iostream>

int main()
{
    int n;
    auto aa = 0;
    auto a = 1; 
    auto F=0;
    
    std::cout << "Digite o numero de termos da sequencia de Fibonacci: ";
    std::cin >> n;
    std::cout << aa << " " << a << " ";
    for (auto i = 0; i < n - 2; i++)
    {
        F = a + aa;
        cout << F << " ";
        aa = a;
        a = F;
    }
    std::cout << std::endl;
    return 0;
}
