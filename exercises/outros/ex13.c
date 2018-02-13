#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("O caractere correspondente %c.\n", (char) n);
    return 0;
}