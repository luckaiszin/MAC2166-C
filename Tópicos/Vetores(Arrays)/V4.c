#include <stdio.h>

#define MAX 10000

int main()
{

    int n, x[MAX], y[MAX];
    int produto = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
        produto = produto + x[i] * y[i];
    }

    printf("prod = %d", produto);

    return 0;
}