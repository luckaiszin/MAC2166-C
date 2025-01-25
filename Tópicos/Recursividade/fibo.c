#include <stdio.h>

int f(int n)
{
    int r;
    if (n == 1 || n == 2)
        r = 1;
    else
        r = f(n - 2) + f(n - 1);
    return r;
}

int main()
{

    int n;
    scanf("%d", &n);
    printf("o %do termo da sequencia eh %d\n", n, f(n));
    return 0;
}