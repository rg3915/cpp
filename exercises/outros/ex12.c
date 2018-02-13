#include <stdio.h>

int main() {
    float x;
    printf("Digite um numero fracionario: ");
    scanf("%f",&x);
    printf("A parte inteira do numero eh %d.\n", (int) x);
    return 0;
}