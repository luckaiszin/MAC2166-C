#include <stdio.h>

int is_alnum(char c);

int main()
{

    char c;
    int maior = 0;

    do
    {
        int k = 0;
        do
        {
            scanf("%c", &c);
            if(is_alnum(c)) k++;
        } while (is_alnum(c));

        if (k > maior)
            maior = k;

    } while (c != '.');

    printf("Maior = %d", maior);

    return 0;
}

int is_alnum(char c)
{
    if ('A' <= c && c <= 'Z')
        return 1;
    if ('a' <= c && c <= 'z')
        return 1;
    if ('0' <= c && c <= '9')
        return 1;
    return 0;
}