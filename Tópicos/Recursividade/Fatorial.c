#include <stdio.h>

int fatorial(int x);

int main()
{

    int x;

    scanf("%d", &x);
    fatorial(x);
    printf("O fatorial de %d eh %d\n", x, fatorial(x));

    return 0;
}

int fatorial(int x)
{
    int r;

    if (x == 0)
        r = 1;
    else
        r = x * fatorial(x - 1);

    return r;
}
