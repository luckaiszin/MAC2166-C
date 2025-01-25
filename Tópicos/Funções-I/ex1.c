#include <stdio.h>

int contadigito(int a, int d);
int main()
{

    int n1;
    scanf("%d", &n1);

    int n2;
    scanf("%d", &n2);
    int i;

    for (i = 1; i <= 9; i++)
    {
        int x1;
        x1 = contadigito(n1, i);
        int x2;
        x2 = contadigito(n2, i);
        if (x1 != x2){
            printf("%d nao eh permutacao de %d\n", n1, n2);
            return 0;}
    }

    printf("%d eh permutacao de %d\n", n1, n2);

    return 0;
}

int contadigito(int a, int d)
{
    int c = 0;

    while (a != 0)
    {
        if (a % 10 == d)
            c++;
        a = a / 10;
    }

    return c;
}