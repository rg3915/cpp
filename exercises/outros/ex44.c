/*
 *  ex44.c - Programa para somar os fatoriais dos numeros de 
 * 0 a n, onde n eh fornecido pelo usuario (sem usar funcao).  
 */
#include <stdio.h>

int main(){
    int n, i, j;
    unsigned long int res = 0, fat;
    
    printf("Digite um numero: ");
    scanf("%d",&n);
    
    for (i = 0; i <= n; i++) {
        fat = 1;
        for (j = 2; j <= i; j++) {
            fat = fat*j;
        }
        res = res + fat;
    } 

    printf("O resultado eh %lu.\n", res);
    
    return  0;
}