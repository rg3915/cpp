/*
 *  ex62.c - Armazenando em memoria as dez  primeiras palavras
 * de uma frase usando getchar e matriz de caracteres.
 */
#include <stdio.h>
#include <string.h>

#define MAX_PAL     10
#define MAX_STR     101

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
    char c;
    int i, quant = 0;
    char palavras[MAX_PAL][MAX_STR];
    
    /* Lendo a frase digitada pelo usuario e guardando 
       as MAX_PAL palavras na matriz palavras */
    c = getchar();
    for (i = 0; i < MAX_PAL; i++) {
        c = ler_proxima_palavra(palavras[i], MAX_STR, c);
        
        /* Verificando se nao foi lida uma palavra nula */
        if (strlen(palavras[i]) > 0) quant = i + 1;
        
        /* Verificando se chegou no final da linha */
        if (c == '\n')
            break;
    }
    
    /* Mostrando as palavras armazenadas */
    if (quant == 0) {
        printf("Nenhuma frase foi digitada.\n");
    } else {
        /* Personalizando a mensagem inicial */
        if (quant < MAX_PAL) {
            printf("A frase tem somente %d palavras: ", quant);
        } else {
            printf("A frase tem pelo menos %d palavras: ", MAX_PAL);
        }

        /* Sempre a primeira palavra eh mostrada */
        printf("\"%s\"", palavras[0]);    
        
        /* Mostrando as palavras entre a primeira e a ultima */
        for (i = 1; i < quant-1; i++) {
            printf(", \"%s\"", palavras[i]);
        }
        
        /* Mostrando a ultima palavra caso tenha mais de uma palavra */ 
        if (quant > 1) {
            printf(" e \"%s\".\n", palavras[i]);
        } else {
            printf(".\n");
        }
    }
    
    return 0;
}