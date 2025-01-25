#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MMAX 20
#define NMAX 100

int ocorre(char u[], char v[], int i);

int main()
{
    char palavra[MMAX + 1];
    char frase[NMAX + 1];
    int i, n_occ = 0;

    scanf("%20s", palavra);
    printf("Lido: >>%s<<\n", palavra);

    scanf(" %100[^\n]", frase);
    printf("Lido: >>%s<<\n", frase);

    for (i = 0; frase[i] != '\0'; ++i)
    {
        if (ocorre(palavra, frase, i))
            n_occ++;
    }
    printf("No. occorrencias: %d\n", n_occ);

    return 0;
}

int ocorre(char u[], char v[], int i)
{
    int j = 0;

    while (u[j] == v[i + j] && u[j] != '\0')
        j++;

    if (u[j] == '\0')
        return TRUE;

    return FALSE;
}
