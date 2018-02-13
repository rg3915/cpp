/*
 *  ex60.c - Armazenando em memoria as tres  primeiras palavras
 * de uma frase usando getchar.
 */
#include <stdio.h>
#include <string.h>

/*  Constante simbolica para o tamanho maximo de uma string */
#define MAX_STR 4 
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
 *  Funcao ler_proxima_palavra: recebe um ponteiro str para uma string,
 * o tamanho n maximo da string e um caractere c (ultimo lido). Ler 
 * caracteres da entrada padrao com o getchar e guarda em str apenas
 * a primeira sequencia de letras devolvendo o ultimo caractere lido que
 * nao eh letra. 
 */
char ler_proxima_palavra(char *str, int n, char c) {
    int i = 0;
    
    /*  Despreza todo caractere que nao eh letra e nem quebra de linha */
    while (!(eh_letra(c)) && c != '\n') c = getchar();
    
    /*  Armazena as letras na string str */
    while (eh_letra(c) && i < n-1 && c != '\n') {
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i] = '\0';
    
    /*  Devolve o ultimo caractere lido que nao eh letra */
    return c;
}

/*
 *  Funcao Principal
 */
int main() {
    char str1[MAX_STR], str2[MAX_STR], str3[MAX_STR];
    char c;

    printf("Digite uma frase: ");
    c = getchar();
    c = ler_proxima_palavra(str1,MAX_STR,c);
    c = ler_proxima_palavra(str2,MAX_STR,c);
    c = ler_proxima_palavra(str3,MAX_STR,c);
    
    if (strlen(str1) == 0) {
        printf("Nenhuma frase foi digitada.\n");
    } else if (strlen(str2) == 0) {
        printf("A frase tem somente uma palavra que eh: \"%s\"\n", str1);
    } else if (strlen(str3) == 0) {
        printf("A frase tem somente duas palavras: \"%s\" e \"%s\"\n", str1, str2);
    } else {
        printf("A frase tem pelo menos as tres palavras: \"%s\", \"%s\" e \"%s\".\n", str1, str2, str3);
    }
    
    return 0;
}