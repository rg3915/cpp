#include <iostream>

int main()
{
    int n, k;
    float sn = 0.0;
    std::cout << "Digite um numero: ";
    std:: cin >> n;
    k = n;
    for (auto i = 1; i <= n; i++)
    {
        sn = sn + static_cast<float>(i) / k;
        k--;
    }
    cout << sn << endl;
    return 0;
}
