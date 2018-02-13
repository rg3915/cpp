/*
 *  ex43.c - Programa para somar os fatoriais dos numeros de 
 * 0 a n, onde n eh fornecido pelo usuario.  
 */
#include <stdio.h>

/*
 *  Funcao fatorial: devolve o fatorial de n.
 */
unsigned long int fatorial(int n) {
    unsigned long int fat = 1;
    
    while (n > 1) {
        fat = fat * n;
        n--;
    }
    
    return fat;    
}

/*
 *  Funcao Principal
 */
int main() {
    int n, i;
    unsigned long int res = 0; 
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        res = res + fatorial(i);
    }
    
    printf("A soma eh %lu.\n", res);
    
    return 0;
}