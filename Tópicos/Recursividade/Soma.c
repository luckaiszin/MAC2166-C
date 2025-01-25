#include <stdio.h>

int soma(int x);

int main()
{

    int x, r;

    scanf("%d", &x);
    r = soma(x);
    printf("A soma dos %d primeiros eh %d\n", x, r);

    return 0;
}

int soma(int x)
{
    int r;

    if (x == 1)
        r = 1;
    else
        r = x + soma(x - 1);

    return r;
}