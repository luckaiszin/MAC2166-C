#include <stdio.h>

int funcao(int x);

int main()
{

    int n;
    scanf("%d", &n);

    funcao(n);

    return 0;
}

int funcao(int x)
{

    int d = 0;
    int last;

    while (d > 0)
    {

        d = d / 10;
        c++;
        if (d / 10 == 0)
            last = d;
    }

    printf("%d", &c);
    printf("%d", &last);
}