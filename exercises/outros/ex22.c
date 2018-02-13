/*
 *  ex22.c - Verificando se um numero eh multiplo de
 * 2 e 5 ou soh de 2 ou soh de 5 ou nao eh multiplo de
 * 2 e nem de 5.
 */
#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    
    if (n % 2 == 0) {
        if (n % 5 == 0) {
            printf("O numero %d eh multiplo de 2 e de 5.\n", n);
        } else {
            printf("O numero %d eh multiplo de 2 e nao eh multiplo de 5.\n",n);
        }
    } else {
        if (n % 5 == 0) {
            printf("O numero %d eh multiplo de 5 e nao eh multiplo de 2.\n",n);
        } else {
            printf("O numero %d nao eh multiplo nem de 5 e nem de 2.\n",n);
        }        
    }
    
    return 0;
}