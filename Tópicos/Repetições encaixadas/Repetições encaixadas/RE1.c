#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i;
    int j;
    int soma;
    

    for (i = 0; i < n; i++)
    {
        soma = 0;
        int e = 1;
        for (j = 0; e != 0; j++)
        {
            scanf("%d", &e);
            if (e % 2 == 0)
                soma = soma + e;
        }

        printf("A soma da sequencia %d eh %d\n", i + 1, soma);
    }

    return 0;
}