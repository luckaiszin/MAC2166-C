#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    float epsilon = 0.1;
    float sen = x;
    float soma = 0;
    int k = 0;

    while (sen > epsilon)
    {
        soma = soma + sen;
        sen = sen * (-(x * x) / ((k + 2) * (k + 3)));
        k += 2;
    }

    printf("%f", soma);
    return 0;
}