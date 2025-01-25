#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    float x;
    scanf("%f", &x);
    int i;
    float soma = 0;
    float cos = 1;
    int k = 0;
    for (i = 0; i < n; i++)
    {
        soma = soma + cos;
        cos = cos * (-((x * x) / ((k + 1) * (k + 2))));
        k = k + 2;
    }

    printf("%f", soma);

    return 0;
}