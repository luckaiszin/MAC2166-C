#include <stdio.h>

int euclides(int a, int b)
{

    int r;

    if (b == 0)
        r = a;
    else
        r = euclides(b, a % b);

    return r;
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    printf("O MDC de %d e %d eh %d", a, b, euclides(a, b));

    return 0;
}