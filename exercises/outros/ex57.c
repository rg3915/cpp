/*
 *  ex57.c - Lendo strings com o fgets (cuidados).
 */
#include <stdio.h>

/*  Constante simbolica para o tamanho maximo de uma string */
#define MAX_STR 102 

int main() {
    char str[MAX_STR];
    
    printf("Digite qualquer coisa e de enter: ");
    fgets(str, MAX_STR, stdin);
    printf("A string eh %s.\n", str);

    return 0;
} 