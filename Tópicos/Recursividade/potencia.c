#include <stdio.h>

int power(int x, int y);

int main()
{

    int b, e, r;

    scanf("%d %d", &b, &e);
    r = power(b,e);
    printf("%d^%d eh %d\n", b, e, r);

    return 0;
}

int power(int x, int y)
{
    int r;

    if (y !=  1)
        r = x * power(x, y - 1);
    else
        r = x;
        
    return r;
}