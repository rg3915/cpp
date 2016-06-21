#include <stdio.h>
#define MAX 100

int main ()
{
    char string[MAX], c;
    int histograma[26], i, pos;
    printf("Digite uma sequencia de caracteres:\n");
    fgets(string,MAX,stdin);
    for (i = 0; i < 26; i++)
        histograma[i] = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] = string[i] - 'A' + 'a';
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            pos = string[i] - 'a';
            histograma[pos]++;
        }
    }
    for (c = 'a'; c <= 'z'; c++)
    {
        pos = c - 'a';
        printf("%c %d\n",c,histograma[pos]);
    }
    return 0;
}
