/*
 *  ex34.c - Calculando o fatorial de n
 */
#include <stdio.h>

int main() {
    unsigned long int n, fat, i;
    
    printf("Digite um numero: ");
    scanf("%lu",&n);

    fat = 1;
    for (i = n; i > 1; i--) {
        fat = fat*i;
    }       
    printf("%lu! = %lu.\n",n, fat);
    
    return 0;
}