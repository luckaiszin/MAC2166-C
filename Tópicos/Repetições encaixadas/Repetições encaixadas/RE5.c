#include <stdio.h>

int main()
{

    int m;
    scanf("%d", &m);
    int n;
    int j;

    for (n = 1; n <= m; n++)
    {
        int soma = 0;
        for (j = n * (n - 1) + 1; soma != (n * n * n); j += 2)
        {
            soma = soma + j;
            printf("%d\n", j);
        }
        printf("Cubo: %d\n", soma);
    }

    return 0;
}