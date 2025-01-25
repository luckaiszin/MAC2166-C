#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define NMAX 20
#define NMAX 100

int ocorre(char u[], char v[], int i);

int main()
{

    char u[] = "cu";
    char v[] = "Eu curto cuscuz.";

    int i, k, s = 0;

    for (i = 0; v[i] != '\0'; i++)
    {
        k = ocorre(u, v, i);
        s += k;
    }

    printf("No. occorrencias: %d", s);

    return 0;
}

int ocorre(char u[], char v[], int i)
{

    int t = 0;
    int j;

    for (j = 0; u[j] != '\0'; j++)
    {
        t++;
    }

    for (j = 0; j < t; j++)
    {
        if (u[j] != v[i + j])
            return FALSE;
    }

    return TRUE;
}
