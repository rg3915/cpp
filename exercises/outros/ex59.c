/*
 *  ex59.c - Tentativa de guardar as tres  primeiras palavras
 * de uma frase usando scanf (tem problemas nessa abordagem).
 */
#include <stdio.h>

/*  Constante simbolica para o tamanho maximo de uma string */
#define MAX_STR 100 

int main () {
    char str1[MAX_STR], str2[MAX_STR], str3[MAX_STR];
    
    printf("Digite uma frase: ");
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    
    printf("As tres primeiras palavras sao %s, %s e %s\n", str1, str2, str3);
    
    return 0;
}