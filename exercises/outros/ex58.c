/*
 *  ex58.c - Exemplo de uso da funcao strcpy da biblioteca padrao
 * "string.h"
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Ola\tUSP\n";
    char str2[1000] = "Ola\tStrcpy\n";

    printf("%s",str1);
    printf("%s",str2);
    
    strcpy(str2,str1);
    
    printf("%s",str1);
    printf("%s",str2);
    
    return 0;
}