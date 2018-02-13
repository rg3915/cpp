/*
 *  ex56.c - Lendo strings com o getchar, verificando letras
 * maiusculas e minusculas, verificando caracteres que sao 
 * algarismos.
 */
#include <stdio.h>

/*  Constante simbolica para o tamanho maximo de uma string */
#define MAX_STR 101 

/*
 *  Funcao eh_algarismo: devolve 1 se o caractere c representar
 * um algarismo decimal e 0, caso contrario.
 */
int eh_algarismo(char c) {
    return (c >= '0' && c <= '9');
}

/*
 *  Funcao eh_minusculo: devolve 1 se o caractere c representar
 * uma letra minuscula e 0, caso contrario.
 */
int eh_minusculo(char c) {
    return (c >= 'a' && c <= 'z');
}

/*
 *  Funcao eh_maiusculo: devolve 1 se o caractere c representar
 * uma letra maiuscula e 0, caso contrario.
 */
int eh_maiusculo(char c) {
    return (c >= 'A' && c <= 'Z');
}

/*
 *  Funcao eh_letra: devolve 1 se o caractere c representar
 * uma letra e 0, caso contrario.
 */
int eh_letra(char c) {
    return (eh_minusculo(c) || eh_maiusculo(c));
}

/*
 *  Funcao maiusculo: devolve o caractere correspondente 
 * maiusculo do caractere c, caso c seja uma letra minuscula. 
 * Outro caso, devolve o proprio caractere c.
 */
char maiusculo(char c) {
    if (eh_minusculo(c)) {
        return (c - ('a'-'A'));
    }
    
    return c; 
}

/*
 *  Funcao minusculo: devolve o caractere correspondente 
 * minusculo do caractere c, caso c seja uma letra maiuscula. 
 * Outro caso, devolve o proprio caractere c.
 */
char minusculo(char c) {
    if (eh_maiusculo(c)) {
        return (c + ('a'-'A'));
    }
    
    return c; 
}

/*
 *  Funcao Principal
 */
int main() {
    char str[MAX_STR], c;
    int i = 0;

    printf("Digite uma string: \n");
    c = getchar();
    while (c != '\n' && i < MAX_STR-1) {
        if (eh_letra(c)) {
            str[i] = minusculo(c);
            i++;
        }
        c = getchar();
    }
    str[i] = '\0';
    
    printf("A(s) letra(s) digitada(s) eh(sao) %s.\n", str);
    
    return 0;
}