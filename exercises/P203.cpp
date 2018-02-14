#include <iostream>
#define NUMERO_MAGICO 10

int chuta(int chute)
{
    if (chute == NUMERO_MAGICO)
        return 0;
    else if (chute < NUMERO_MAGICO)
        return -1;
    else
        return 1;
}

int encontra(int max)
{
    for (auto i = 1; i <= max; i++)
    {
        if (chuta(i) == 0)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    inst res;
    std::cout << "Digite um numero: ";
    std::cin >> n;
    res = encontra(n);
    if (res == -1)
        cout << "Nao encontrei." << endl;
    else
        std::cout << res << std::endl;
    return 0;
}
